
#include "FuelGauge.h"
#include <iostream>
using namespace std;





FuelGauge::FuelGauge()
{ gallons = 0;}


FuelGauge::FuelGauge(int g)
{
if (g <= 15)
gallons = g;
else
gallons = 15;
}


int FuelGauge::getGallons()
{ return gallons;}


void FuelGauge::incrementGallons()
{
if (gallons < 15)
gallons++;
else
cout << "FUEL OVERFLOWING!!!\n";
}


void FuelGauge::decrementGallons()
{
if (gallons > 0)
gallons--;
else
cout << "OUT OF GAS!!!\n";
}
