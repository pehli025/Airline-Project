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
    /*
     * @desc A default use case of Customer initializing the string variables to empty strings "", and int to -1.
     * used for populating passengers_ vectors with default customers to set size of the vector.
     */
    Customer();
    /*
     * @desc Customer object method
     */
    Customer(int customer_id, std::string phone_number, std::string address, std::string first_name, std::string last_name, int flight_id);
    /*
     * @desc Customers flightId is initially set to -1 to indicate that the customer does not have a flight currently.
     * During the check in process the user will choose a flight which calls SetFlightId to set the customer flight variable.
     */
    void SetFlightId(int f_id);
    /*
     * @desc Getter for custId;
     */
    int GetId();
    /*
     * @desc Getter for flightId
     */
    int GetFlightId();
    /*
     * @desc Getter for phoneNum
     */
    std::string GetPhoneNumber();
    /*
     * @desc Getter for address_
     */
    std::string GetAddress();
    /*
     * @desc Getter that combines the first and last names.
     */
    std::string GetName();
    /*
     * @desc Increments the variable custId, it is called every time a customer is created, giving each new customer
     * a unique customer ID
     */
    static void CustIncrement();
    /*
     * @desc Adds a newly created customer into the customers vector.
     */
    static void AddCustomer(Customer* customer);
    /*
     * @desc PrintCustomerInfo() prints the customers custId, phoneNum, address_, name and flight id.
     */
    void PrintCustomerInfo();
    /*
     * @desc Uses the custId as a key to use the built-in unordered map function for find(key)
     */
    static int CustomerSearch(int custId);

    //static void CreateNewCustomer();
    //static void ChooseFlight(Customer* cust);

    /*
     * @desc assigned the customer Id from the global custId
     */
    int customerId;
    /*
     * @desc global keeps track of the number of existing customers.
     */
    inline static int custId = 0;
    /*
     * @desc used to store the existing customers in a data structure.
     */
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
