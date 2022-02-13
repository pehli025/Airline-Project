#include "customer.h"
#include <iostream>


    Customer::Customer(int customer_id, std::string phone_number, std::string address, std::string first_name, std::string last_name, int flight_id) {
        CustomerId  = customer_id;
        address_ = address;
        phoneNum = phone_number;
        firstName = first_name;
        lastName = last_name;
        flightId = flight_id;
    }
    int Customer::GetId() {
        return CustomerId;
    }
    std::string Customer::GetPhoneNumber() {
        return phoneNum;
    }
    std::string Customer::GetAddress() {
        return address_;
    }
    std::string Customer::GetName() {
        return lastName + ", " + firstName;
    }
    int Customer::GetFlightId() {
        return flightId;
    }
    void Customer::PrintCustomerInfo() {
        std::cout << "ID: " << GetId() << std::endl <<
        "Phone Number: " << GetPhoneNumber() << std::endl <<
        "Address: " << GetAddress() << std::endl <<
        "Name: " << GetName() << std::endl <<
        "Flight ID: " << GetFlightId() << std::endl;


    }
