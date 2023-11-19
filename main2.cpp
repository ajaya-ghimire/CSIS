
#include <iostream>
#include "Odometer.h"

using namespace std;

int main()
{

FuelGauge fuel;


Odometer odometer(0, &fuel);


for (int i = 0; i < 15; i++)
fuel.incrementGallons();


while (fuel.getGallons() > 0)
{

odometer.incrementMiles();


cout << "Mileage: " << odometer.getMileage() << endl;


cout << "Fuel level: " << fuel.getGallons() << " gallons\n";
cout << "------------------------------\n";
}

return 0;
}
