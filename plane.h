#ifndef PLANE_H
#define PLANE_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include "customer.h"

class Plane {
public:
    /*
     * @desc plane default constructor, sets ints to -1 and strings to ""
     */
    Plane();
    /*
     * @desc plane constructor takes 5 arguments:
     *  dest: The destination where the plane is set to go.
     *  flight_id: a unique ID for each plane set by the global planeId.
     *  plane_model: the model of the plane which also dictates the number of passegers able to transport.
     *  co_pilot: name of the co_pilot.
     *  pilot: name of the pilot.
     */
    Plane(std::string dest, int flight_id,  std::string plane_model, std::string pilot_name, std::string co_pilot);
    /*
     * @desc Assigns the user to a plane based on the flightId and also chooses the seat on the plane. takes in 3 arguments:
     * flightId: is used to find the plane in the planes unordered map.
     * customer: uses the customer to place in the planes passengers_ vector.
     * chosenSeat: to assign the vector index for the customers seat.
     */
    static void SeatAssignment(int flightId, Customer* customer, int chosenSeat);
    /*
     * @desc Finds the planes available seats by using flightId to access the planes vector passenger_ from the unordered map planes.
     * takes 1 argument:
     * flightId: Is used as a key to search for the plane in the unordered map planes
     */
    static void PrintAvailableSeats(int flightID);
    /*
     * @desc Similarly to PrintCustomerInfo(), flightId is used as a key to search in an unordered map to find the plane, 1 argument:
     * flightId: Used as a key for searching
     */
    static void PrintFlightInfo(int flightId);
    /*
     * @desc increments the global variable used to keep track of existing planes.
     */
    static void PlaneIncrement();
    /*
     * @desc Adds a plane object to the planes unordered map a database of the existing planes.
     */
    static void AddPlane(Plane* plane);
    /*
     * @desc Getter for planeId
     */
    static int GetPlaneId();
    /*
     * @desc iterates through each plane and prints the flights that have remainingSeats > 0 to indicate that select planes have open seats.
     */
    static void ListAvailableFlights();
    /*
     * @desc When a user chooses a seat, before it is assigned, it must pass IsSeatAvailable() before it is assigned, has 1 argument:
     * chosenSeat: used to check against the already chosen seats on that flight.
     */
    bool IsSeatAvailable(int chosenSeat);
    /*
     * @desc Prints the flight information flightId, pilots, destination, and model.
     */
    static void PrintFlightInfo();
    /*
     * @desc Getter for planeModel
     */
    std::string GetPlaneModel();
    /*
     * @desc Getter for pilotName;
     */
    std::string GetPilotName();
    /*
     * @desc Getter for coPilot
     */
    std::string GetCoPilotName();
    /*
     * @desc Getter for dest
     */
    std::string GetDest();
    /*
     * @desc Getter for flightId
     */
    int GetFlightId();
    /*
     * @desc Getter for numSeats
     */
    int GetNumSeats();
    /*
     * @desc Getter for remainingSeats
     */
    int RemainingSeats();
    /*
     * @desc Getter for passengers_
     */
    std::vector<Customer*>& GetPassengers();
    /*
     * @desc a global unordered map for storage of existing planes.
     */
    inline static std::unordered_map<int,Plane*> planes;
    /*
     * @desc global variable that keeps track of the number of planes being created.
     */
    inline static int planeId = 0;
    /*
     * @desc is used to keep track of the number of remaining seats.
     */
    int remainingSeats;
    /*
     * @desc numSeats is the initial number of seats planes have based on their model
     * 737 = 35 seats
     * 747 = 50 seats
     * 767 = 60 seats
     */
    int numSeats;
    /*
     * @desc is assigned by the global planeId, a unique identification number. Also used as a key for planes.
     */
    int flightId;
    /*
     * @desc Descriptor for each plane depicting the plane model, there are 3 models: 737, 747, 767
     */
    std::string planeModel;
    /*
     * @desc Descriptor for the name of the planes pilot
     */
    std::string pilotName;
    /*
     * @desc Descriptor for the name of the planes co-pilot
     */
    std::string coPilot;
    /*
     * @desc Descriptor for destination of the plane.
     */
    std::string dest_;
private:
    /*
     * @desc contains customers to represent where each customer sits based on the index.
     */
    std::vector<Customer*> passengers_;


};

#endif //AIRLINE_PLANE_H
