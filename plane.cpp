#include "plane.h"

Plane::Plane() {
    numSeats =  -1;
    planeModel = "";
    pilotName = "";
    coPilot = "";
    dest_ = "";
    flightId = -1;
}
Plane::Plane(std::string dest, int flight_id,std::string plane_model, std::string pilot_name, std::string co_pilot) {
    planeModel = plane_model;
    pilotName = pilot_name;
    coPilot = co_pilot;
    dest_ = dest;
    flightId = planeId;

    if(plane_model == "747") {
        Customer* c = new Customer();
        numSeats = 50;
        remainingSeats = numSeats;
        for(int i = 0; i < 50; i++) {
            passengers_.push_back(c);
        }
    }
    else if(plane_model == "737") {
        numSeats = 35;
        remainingSeats = numSeats;
        Customer* c = new Customer();
        for(int i = 0; i < 35; i++) {
            passengers_.push_back(c);
        }
    }
    else if(plane_model == "767") {
        Customer* c = new Customer();
        numSeats = 60;
        remainingSeats = numSeats;
        for(int i = 0; i < 60; i++) {
            passengers_.push_back(c);
        }
    }

}
int Plane::GetPlaneId() {
    return planeId;
}
int Plane::GetFlightId() {
    return flightId;
}
std::string Plane::GetPlaneModel() {
    return planeModel;
}
std::string Plane::GetPilotName() {
    return pilotName;
}
std::string Plane::GetCoPilotName() {
    return coPilot;
}
int Plane::GetNumSeats() {
    return numSeats;
}
std::string Plane::GetDest() {
    return dest_;
}
std::vector<Customer*>& Plane::GetPassengers() {
    return passengers_;
}
int Plane::RemainingSeats() {
    return remainingSeats;
}


void Plane::SeatAssignment(int flightId, Customer* customer, int chosenSeat) {
    //Plane* &plane = planes[flightId];

    if (chosenSeat > planes[flightId]->remainingSeats|| chosenSeat < 0) {
        std::cout << "Please provide a valid seat number." << std::endl;
        return;
    }
    else if (planes[flightId]->IsSeatAvailable(chosenSeat) != true) {
        std::cout << "Seat " << chosenSeat << " is has already been taken." << std::endl;
        std::cout << "Please Choose another seat: " << std::endl;
        Plane::PrintAvailableSeats(flightId);
        std::cin >> chosenSeat;
        Plane::SeatAssignment(flightId,customer, chosenSeat);
    }
    customer->SetFlightId(flightId);
    planes[flightId]->passengers_[chosenSeat] = customer;
    planes[flightId]->remainingSeats--;
}

void Plane::PrintAvailableSeats(int flightId) {
    std::vector<Customer*>& cust_ = planes[flightId]->GetPassengers();
    std::cout << "-------------- List of available seats ---------------------" << std::endl;
    int n = cust_.size();
    std::cout << "n: " << n << std::endl;
    for(int i = 0; i < n; i++) {
        if(cust_[i]->GetId() == -1) {
            std::cout << "Seat: " << i << " is open." << std::endl;
        }
    }

}
bool Plane::IsSeatAvailable( int chosenSeat) {
    if(Plane::passengers_[chosenSeat]->GetId() == -1) {
        return true;
    }
    return false;
}
void Plane::AddPlane(Plane* plane) {
    planes[planeId] = plane;
    Plane::PlaneIncrement();
}
void Plane::PlaneIncrement() {
    planeId++;
}
void Plane::ListAvailableFlights() {
    for(auto [id, plane] : planes) {
        if(plane->RemainingSeats() > 0) {
            std::cout << "Flight ID: " << plane->GetFlightId() <<
                      "  Destination : " << plane->GetDest() <<
                      "  Number of seats Available: " << plane->remainingSeats
                      << std::endl;
        }
    }
    std::cout << "---------------------------------------------------------------------------------------" << std::endl;
}

void Plane::PrintFlightInfo(int flightId) {
    std::cout << "Flight ID: " << flightId << std::endl <<
              "Destination: " << Plane::planes[flightId]->GetDest() << std::endl <<
              "Max number of seats: " << Plane::planes[flightId]->GetNumSeats() << std::endl <<
              "Remaining Seats: " << Plane::planes[flightId]->RemainingSeats() << std::endl <<
              "Pilot: " << Plane::planes[flightId]->GetPilotName() << " Co-pilot: " << Plane::planes[flightId]->GetCoPilotName() << std::endl <<
              "Plane model: " << Plane::planes[flightId]->GetPlaneModel() << std::endl;
    std::cout << "---------------------------------------------------------------------------------------" << std::endl;
}
void Plane::PrintFlightInfo() {
    int flight_num = 0;
    std::cout << "Please Enter the flight you would like to check." << std::endl;
    std::cin >> flight_num;
    std::cout << "Flight ID: " << flight_num << std::endl <<
              "Destination: " << Plane::planes[flight_num]->GetDest() << std::endl <<
              "Max number of seats: " << Plane::planes[flight_num]->GetNumSeats() << std::endl <<
              "Remaining Seats: " << Plane::planes[flight_num]->RemainingSeats() << std::endl <<
              "Pilot: " << Plane::planes[flight_num]->GetPilotName() << " Co-pilot: " << Plane::planes[flight_num]->GetCoPilotName() << std::endl <<
              "Plane model: " << Plane::planes[flight_num]->GetPlaneModel() << std::endl;
    std::cout << "---------------------------------------------------------------------------------------" << std::endl;
}
