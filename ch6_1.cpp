/*
****************************
CELSIUS TEMPERATURE TABLE
****************************
*/

#include <iostream>
#include <iomanip>

using namespace std;

void celsius(double);

int main()
{
	cout<<"\nCelsius Temperature Table"<<endl;
	for (double i=0;i<=20;i++)
	{
		celsius(i);
	}
	
	cout<<"\nThank you!";


	return 0;
}


//*********** This function converts celsius to fahrenheit***************
void celsius(double x)
{
	double f;
	
	
		f=(x*(9/5))+32;
		cout<<"Fahrenheit equivalent of "<<setw(2)<<x<<" Celsius is: "<<setw(3)<<f<<"F. \n";

	
}