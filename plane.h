#ifndef AIRLINE_PLANE_H
#define AIRLINE_PLANE_H

#include "airline.h"
#include "customer.h"
#include <iostream>

#include <vector>

class Plane {
public:
    Plane(std::string plane_model, std::string pilot_name, std::string co_pilot, int num_seats, std::vector<Customer*> passengers);

    static void SeatAssignment(Customer* customer, int chosenSeat);
    int RandomSeat();
    void PrintAvailableSeats();

    static std::string GetPlaneModel();
    static std::string GetPilotName();
    static std::string GetCoPilotName();
    static int GetNumSeats();
    static std::vector<Customer*> GetSeats();
    static bool IsSeatAvailable(int chosenSeat);

    static int numSeats;
    static std::string planeModel, pilotName, coPilot;
    static std::vector<Customer*> passengers_   ;

};

#endif //AIRLINE_PLANE_H
