#include "check_in_customer.h"
#include <iostream>
#include <stdio.h>

    bool CheckInCustomer::CustomerSearch(std::unordered_map<int, Customer*> map, int custId) {
        /*int left = 0, right = customers.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (customers[mid].GetId() = custId) {
                return true;
            }
            if (custId < customers[mid].GetId()) {
                    right = mid - 1;
            }
            else {
                left = mid;
            }
        }
        */
        return false;
    }

    void CheckInCustomer::CreateNewCustomer() {
        std::string phoneNum, addr, firstName, lastName;
        int flightId;


        std::cout << " Enter a phone number (XXX-XXX-XXX): ";
        std::cin >> phoneNum;
        std::getline(std::cin, phoneNum);

        std::cout  << "Enter address: ";
        std::cin >> addr;
        std::getline(std::cin, addr);

        std::cout  << "Enter first name: ";
        std::cin >> firstName;
        std::getline(std::cin, firstName);

        std::cout  << "Enter last name: ";
        std::cin >> lastName;
        std::getline(std::cin, lastName);

        std::cout  << "Enter flight id: ";
        std::cin >> flightId;

        Customer* cust = new Customer(Airline::GetCustId(), phoneNum, addr,
                                      firstName, lastName, -1);

        Airline::AddCustomer(cust);
        CheckInCustomer::ChooseFlight(cust);
    }

    void CheckInCustomer::ChooseFlight(Customer* customer) {
        int flightNum = 0, chosenSeat;
        std::cout << "Here is a list of available flights to choose from." << std::endl;
        Plane::ListAvailableFlights();
        std::cout << "Choose from the flight IDs: ";
        std::cin >> flightNum;
        std::cout << "Choose from Available seats: " << std::endl;
        Plane::PrintAvailableSeats(flightNum);
        std::cin >> chosenSeat;
        Plane::SeatAssignment(flightNum, customer, chosenSeat);
    }
	
	