// Airline.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include "airline.h"




    void Airline::Menu() {
        std::cout << "Welcome to Delta Airlines. Please choose from the following menus." << std::endl <<
                  "1. Check in customer." << std::endl <<
                  "2. Check status of flight." << std::endl <<
                  "3. Outgoing flights." << std::endl <<
                  "4. " << std::endl;
        int menu_reply = 0;
        std::cin >> menu_reply;

        switch (menu_reply) {
            case 1:
                CheckInCustomer::CreateNewCustomer();

                break;
            case 2:
                //FlightStatus();
                break;
            case 3:
                //CurrentFlights
                break;
            case 4:
                return;
                break;
        }
    }
    void Airline::CustIncrement() {
        custId++;
    }


    int Airline::GetCustId() {
        return custId;
    }
    void Airline::AddCustomer(Customer* customer) {
        customers[Airline::GetCustId()] = customer;
        Airline::CustIncrement();
    }



    int main() {
    Customer *c = new Customer(1, "123-456-789", "8312 Spring Lake Road", "Billy", "Joel", 1);
    Customer *c1 = new Customer(1, "123-456-789", "8312 Spring Lake Road", "agfgfdaadfg", "adsfadfg", 1);
    Customer *c2 = new Customer();
    Plane *p = new Plane("MSP", Plane::GetPlaneId(), "747", "Bob Dole", "Jimmy John");
    Plane::AddPlane(p);
    Plane *p1 = new Plane("MSP", Plane::GetPlaneId(), "737", "Dole Bob", "John Jimmy");
    Plane::AddPlane(p1);
    Plane *p2 = new Plane();

    CheckInCustomer::ChooseFlight(c);
    Plane::PrintFlightInfo(0);

    //Plane::SeatAssignment(p,c1 ,1);
    //p->PrintAvailableSeats();
    //Plane::PrintFlightInfo();
    //p->PrintFlightInfo(p->GetFlightId());
    //c2->PrintCustomerInfo();

    return 0;
}

