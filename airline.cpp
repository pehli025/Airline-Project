#include <iostream>
#include <stdio.h>
#include "airline.h"

void Airline::Menu() {

    bool quit = false;
    while (!quit){
        std::cout << "Welcome to Delta Airlines. Please choose from the following menus." << std::endl <<
                  "1. Check in customer." << std::endl <<
                  "2. Check status of flight." << std::endl <<
                  "3. Outgoing flights." << std::endl <<
                  "4. Exit" << std::endl;
        int menu_reply = 0;
        std::cin >> menu_reply;
        switch (menu_reply) {
            case 1:
                CheckInCustomer::CreateNewCustomer();
                break;
            case 2:
                Plane::PrintFlightInfo();
                break;
            case 3:
                Plane::ListAvailableFlights();
                break;
            case 4:
                quit = true;
                break;
        }
    }
}
void Airline::TestScenario() {
    Plane* p = new Plane("Las Vegas", Plane::GetPlaneId(), "737", "Jacob Johnson", "Billy Joel");
    Plane::AddPlane(p);
    Plane* p1 = new Plane("New York", Plane::GetPlaneId(), "737", "Donald Faison", "Zach Braff");
    Plane::AddPlane(p1);
    Plane* p2 = new Plane("Dallas", Plane::GetPlaneId(), "747", "Brad Pitt", "Robert Pattinson");
    Plane::AddPlane(p2);
    Plane* p3 = new Plane("Philadelphia", Plane::GetPlaneId(), "737", "Steve Jobs", "Steve Wozniak");
    Plane::AddPlane(p3);
    Plane* p4 = new Plane("Seattle", Plane::GetPlaneId(), "747", "Norm MacDonald", "Ron Swanson");
    Plane::AddPlane(p4);
    Plane* p5 = new Plane("Los Angeles", Plane::GetPlaneId(), "737", "William Turner", "Jack Sparrow");
    Plane::AddPlane(p5);

    Customer* c1 = new Customer(Customer::custId, "763-283-8395", "63 Vale Ave Holyoke, MA 01040", "Jaylaani", "Lorri", -1);
    Customer::AddCustomer(c1);
    Customer* c2 = new Customer(Customer::custId, "651-321-9283", "7757 Plymouth Dr. Merrillville, IN 46410", "Milan", "Selma", -1);
    Customer::AddCustomer(c2);
    Customer* c3 = new Customer(Customer::custId, "763-028-3128", "668 High Ridge Court Macomb, MI 48042", "Soini", "Paavali", -1);
    Customer::AddCustomer(c3);
    Customer* c4 = new Customer(Customer::custId, "763-201-4273", "94 San Carlos St.Laurel, MD 20707", "Elizaveta", "Erkin", -1);
    Customer::AddCustomer(c4);
    Customer* c5 = new Customer(Customer::custId, "651-019-6183", "70 Summer Drive Lumberton, NC 28358", "Madhuri", "Mireia", -1);
    Customer::AddCustomer(c5);
    Customer* c6 = new Customer(Customer::custId, "763-823-8391", "8473 Southampton Circle Villa Rica, GA 30180", "Mridula", "Adolph", -1);
    Customer::AddCustomer(c6);
    Customer* c7 = new Customer(Customer::custId, "651-207-9643", "46 Garden Ave. Bangor, ME 04401", "Grimwald", "Regina", -1);
    Customer::AddCustomer(c7);
    Customer* c8 = new Customer(Customer::custId, "763-923-6776", "50 Lantern St. Parsippany, NJ 07054", "Odoacer", "Eleanore", -1);
    Customer::AddCustomer(c8);
    Customer* c9 = new Customer(Customer::custId, "763-984-0722", "8513 Broad Ave. Daphne, AL 36526", "Amita", "Kodjo", -1);
    Customer::AddCustomer(c9);
    Customer* c10 = new Customer(Customer::custId, "651-903-3940", "398 Studebaker St. New City, NY 10956", "Luarits", "Corinna", -1);
    Customer::AddCustomer(c10);
    Customer* c11 = new Customer(Customer::custId, "763-022-6812", "9233 West Lilac Street Yorktown, VA 23693", "Allan", "Russel", -1);
    Customer::AddCustomer(c11);
    Customer* c12 = new Customer(Customer::custId, "651-888-3221", "8 East 6th Avenue Garland, TX 75043", "Lula", "Valdez", -1);
    Customer::AddCustomer(c12);
    Customer* c13 = new Customer(Customer::custId, "763-992-7104", "9408 Bedford Street, Hartford, CT 06106", "Owen", "Strickland", -1);
    Customer::AddCustomer(c13);
    Customer* c14 = new Customer(Customer::custId, "763-091-9178", "836 Walnutwood Ave. Elkton, MD 21921 ", "Eugene", "Farmer", -1);
    Customer::AddCustomer(c14);
    Customer* c15 = new Customer(Customer::custId, "651-183-7873", "247 Smith Lane, Grandville, MI 49418", "Dexter", "Walker", -1);
    Customer::AddCustomer(c15);
    Customer* c16 = new Customer(Customer::custId, "763-100-3842", "8473 Southampton Circle Villa Rica, GA 30180", "Clyde", "Allen", -1);
    Customer::AddCustomer(c16);
    Customer* c17 = new Customer(Customer::custId, "612-200-0932", "511 Queen Street, Colonial Heights, VA 23834", "Lindsey", "Crawford", -1);
    Customer::AddCustomer(c17);
    Customer* c18 = new Customer(Customer::custId, "612-201-8325", "407 N. Boston St., Quakertown, PA 18951", "Harold", "Thompson", -1);
    Customer::AddCustomer(c18);
    Customer* c19 = new Customer(Customer::custId, "612-202-6598", "262 Manhattan Lane, Hartsville, SC 29550", "Mildred", "Reed", -1);
    Customer::AddCustomer(c19);
    Customer* c20 = new Customer(Customer::custId, "612-432-6960", "7695 Clark St., Barberton, OH 44203", "Blake", "Wong", -1);
    Customer::AddCustomer(c20);

    Plane::SeatAssignment(0,c1,0);
    Plane::SeatAssignment(0,c2,1);
    Plane::SeatAssignment(0,c3,2);
    Plane::SeatAssignment(0,c4,3);
    Plane::SeatAssignment(0,c5,4);
    Plane::SeatAssignment(0,c6,5);
    Plane::SeatAssignment(0,c7,6);
    Plane::SeatAssignment(0,c8,7);
    Plane::SeatAssignment(0,c9,8);
    Plane::SeatAssignment(0,c10,9);

    Plane::SeatAssignment(1,c11,0);
    Plane::SeatAssignment(1,c12,1);
    Plane::SeatAssignment(1,c13,2);

    Plane::SeatAssignment(2,c14,0);
    Plane::SeatAssignment(2,c15,1);
    Plane::SeatAssignment(2,c16,2);

    Plane::SeatAssignment(3,c17,0);

    Plane::SeatAssignment(4,c18,0);
    Plane::SeatAssignment(4,c19,1);

    Plane::SeatAssignment(5,c20,0);



}


