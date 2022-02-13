// Airline.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include "airline.h"
#include "check_in_customer.h"


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
                CheckInCustomer::CustomerSearch(customers, 0);
                break;
            case 2:
                //FlightStatus();
                break;
            case 3:
                //CurrentFlights
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
    Airline::Menu();

    CheckInCustomer::CreateNewCustomer();
    for(auto x : Airline::customers) {
        x.second->PrintCustomerInfo();
    }
    std::cout << Airline::GetCustId << std::endl;
    return 0;
}

