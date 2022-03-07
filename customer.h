#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <vector>
#include <stdio.h>
#include <unordered_map>
#include <string>
#include <ctime>

class Customer {
public:
    Customer();
    Customer(int customer_id, std::string phone_number, std::string address, std::string first_name, std::string last_name, int flight_id);
    void SetFlightId(int f_id);
    int GetId();
    int GetFlightId();
    std::string GetPhoneNumber();
    std::string GetAddress();
    std::string GetName();
    static void CustIncrement();
    static void AddCustomer(Customer* customer);
    void PrintCustomerInfo();
    static int CustomerSearch(int custId);
    static void CreateNewCustomer();
    static void ChooseFlight(Customer* cust);

    int customerId;
    inline static int custId = 0;
    inline static std::unordered_map<int, Customer*> customers;
private:
    int flightId;
    std::string phoneNum,
            address_,
            firstName,
            lastName;

    void SetId(int f_id);
};
#endif //CUSTOMER_H
