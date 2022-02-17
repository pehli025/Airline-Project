#ifndef PLANE_H
#define PLANE_H


#include <iostream>
#include <vector>
#include <unordered_map>
#include "customer.h"

class Plane{
public:
    Plane();
    Plane(std::string dest, int flight_id,  std::string plane_model, std::string pilot_name, std::string co_pilot);

    static void SeatAssignment(int flightId, Customer* customer, int chosenSeat);
    static void PrintAvailableSeats(int flightID);
    static void PrintFlightInfo(int flightId);
    static void PlaneIncrement();
    static void AddPlane(Plane* plane);
    static int GetPlaneId();
    static void ListAvailableFlights();
    bool IsSeatAvailable(int chosenSeat);

    std::string GetPlaneModel();
    std::string GetPilotName();
    std::string GetCoPilotName();
    std::string GetDest();
    int GetFlightId();
    int GetNumSeats();
    int RemainingSeats();
    std::vector<Customer*>& GetPassengers();

private:
    inline static unsigned int planeId = 0;
    int remainingSeats;
    int numSeats, flightId;
    std::string planeModel, pilotName, coPilot, dest_;
    inline static std::unordered_map<int,Plane*> planes;
    std::vector<Customer*> passengers_;
};

#endif //AIRLINE_PLANE_H
