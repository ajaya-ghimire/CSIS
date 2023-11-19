
#include"ParkedCar.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"
#include <iostream>
using namespace std;
class ParkingMeter {
private:
   int minutespurchased;
public:
   ParkingMeter();
   ParkingMeter(int);
   ~ParkingMeter();
   void setparkingmeter(int);
   int getparkingmeter() const;
};

ParkingMeter.cpp:

#include"ParkingMeter.h"

ParkingMeter::ParkingMeter()
{
   minutespurchased = 0;
}
ParkingMeter::ParkingMeter(int aminutespurchased)
{
   minutespurchased = aminutespurchased;
}
ParkingMeter::~ParkingMeter() {}
void ParkingMeter::setparkingmeter(int aminutespurchased)
{
   minutespurchased = aminutespurchased;
}
int ParkingMeter::getparkingmeter() const
{
   return minutespurchased;
}
