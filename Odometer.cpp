
#include "Odometer.h"


Odometer::Odometer(int m, FuelGauge *fp)
{ mileage = m; setPoint = m; fuelGauge = fp; }


int Odometer::getMileage()
{ return mileage;}


void Odometer::incrementMiles()
{

if (mileage < 999999)
mileage++;
else
mileage = 0;


if (setPoint > mileage)
{

int falseMileage = mileage + 1000000;

if ( (falseMileage - setPoint) >= 24 )
{
fuelGauge->decrementGallons();
setPoint = mileage;
}
}
else
{
if ( (mileage - setPoint) >= 24 )
{
fuelGauge->decrementGallons();
setPoint = mileage;
}
}
}
