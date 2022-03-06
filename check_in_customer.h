#ifndef CHECK_IN_CUSTOMER_H
#define CHECK_IN_CUSTOMER_H
#include <unordered_map>
#include "customer.h"
#include "airline.h"
#include "customer.h"
class CheckInCustomer {
 public:
    /*
     * @desc Uses the custId to search the customers vector for the key customer.
     * */
    static bool CustomerSearch(std::unordered_map<int, Customer*> customers, int custId); //
    /*
     * @desc Initializes the user to create a new customer.
     */
    static void CreateNewCustomer();
    /*
     * @desc during the customer check in phase, ChooseFlight will prompt the user to choose a flight from the list of available flights
     */
    static void ChooseFlight(Customer* cust);
    //void AssignPlane(int custId);

};


#endif 