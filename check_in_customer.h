#ifndef CHECK_IN_CUSTOMER_H
#define CHECK_IN_CUSTOMER_H
#include <unordered_map>
#include "customer.h"
#include "airline.h"
#include "customer.h"
class CheckInCustomer {
 public:
    static bool CustomerSearch(std::unordered_map<int, Customer*> customers, int custId);
    static void CreateNewCustomer();
    void CheckIn();
    void AssignPlane(int custId);

};


#endif 