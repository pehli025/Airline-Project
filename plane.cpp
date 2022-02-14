#include "plane.h"


Plane::Plane(std::string plane_model, std::string pilot_name, std::string co_pilot, int num_seats, std::vector<Customer*> passengers) {
    numSeats =  passengers.size();
    planeModel = plane_model;
    pilotName = pilot_name;
    coPilot = co_pilot;
    passengers_ = passengers;
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
std::vector<Customer*> Plane::GetSeats() {
    return passengers_;
}

void Plane::SeatAssignment(Customer* customer, int chosenSeat) {
    if (chosenSeat > numSeats) {
        std::cout << "Please provide a valid seat number." << std::endl;
        return;
    }
    if (!IsSeatAvailable(chosenSeat)) {
        std::cout << "Seat " << chosenSeat << " is has already been taken.";
    }
    passengers_.at(chosenSeat) = customer;
}
void Plane::PrintAvailableSeats() {
    std::cout << "-------------- List of available seats ---------------------" << std::endl;
    for(int i = 0; i < numSeats-1; i++){
        if(passengers_[i]->GetId() == -1) {
            std::cout << "+++ Seat: " << i << " is available." << std::endl;
        }

    }
}

