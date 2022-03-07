#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include <unordered_map>
#include "customer.h"
#include "plane.h"
#include "check_in_customer.h"

class Airline {
public:
    /*
     * @desc Menu() prompts the user to select from options that are displayed. Customer check in, check available flights,
     * information of a specific flight or to exit the menu.
     */
    static void Menu();
    /*
     * @desc TestScenario() is used to populate customers vector and planes vector, assigning the customers to the plane to
     * simulate a real world example when using Menu().
     */
    static void TestScenario();
};
#endif // !#AIRLINE_H

