#include "customer.h"

Customer::Customer() {
    customerId = -1;
    address_ = "";
    phoneNum = "";
    firstName = "";
    lastName = "";
    flightId = -1;
}
Customer::Customer(int customer_id, std::string phone_number, std::string address, std::string first_name, std::string last_name, int flight_id) {
    customerId = custId;
    address_ = address;
    phoneNum = phone_number;
    firstName = first_name;
    lastName = last_name;
    flightId = flight_id;

    Customer::CustIncrement();
}
void Customer::SetFlightId(int f_id) {
    flightId = f_id;
}
int Customer::GetId() {
    return customerId;
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
void Customer::AddCustomer(Customer* cust) {
    customers[custId] = cust;
}
void Customer::CustIncrement() {
    custId++;
}
int Customer::CustomerSearch(int key) {
    if (Customer::customers.find(key) != customers.end()) {
        return 1;
    }
    return 0;
}
void Customer::PrintCustomerInfo() {
    std::cout << "ID: " << GetId() << std::endl <<
              "Phone Number: " << GetPhoneNumber() << std::endl <<
              "Address: " << GetAddress() << std::endl <<
              "Name: " << GetName() << std::endl <<
              "Flight ID: " << GetFlightId() << std::endl;
    std::cout << "---------------------------------------------------------------------------------------" << std::endl;
}
