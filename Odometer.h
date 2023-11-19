
#include "FuelGauge.h"


class Odometer
{

private:

int mileage;


int setPoint;


FuelGauge *fuelGauge;


public:

Odometer(int m, FuelGauge *fp);


int getMileage();


void incrementMiles();
};
