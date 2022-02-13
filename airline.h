#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <unordered_map>
#include "customer.h"


    class Airline {
     public:
        //Airline();
        //~Airline();
        static void AddCustomer(Customer* customer);
        static void Menu();
        static void CustIncrement();
        static int GetCustId();
        inline static std::unordered_map<int,Customer*> customers;

    private:
        inline static unsigned int custId = 0;
    };
#endif // !#AIRLINE_H

