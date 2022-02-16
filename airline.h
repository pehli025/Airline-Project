#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <unordered_map>
#include "customer.h"
#include "plane.h"
#include "check_in_customer.h"
class Airline {
     public:
        //Airline();
        //~Airline();
        static void AddCustomer(Customer* customer);


        static void Menu();
        static void CustIncrement();


        static int GetCustId();
        static int GetPlaneId();


        inline static std::unordered_map<int,Customer*> customers;


        void PrintFlightInfo(int flightId);
    private:

        inline static unsigned int custId = 0;
    };
#endif // !#AIRLINE_H

