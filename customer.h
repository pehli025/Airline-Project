#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <stdio.h>

class Customer {
 public:

    Customer(int customer_id, std::string phone_number, std::string address, std::string first_name, std::string last_name, int flight_id);
    int GetId();
    int GetFlightId();
    std::string GetPhoneNumber();
    std::string GetAddress();
    std::string GetName();
    void PrintCustomerInfo();


    int CustomerId, flightId;
    std::string phoneNum,
                address_,
                firstName,
                lastName;
};

// namespace airline
#endif
