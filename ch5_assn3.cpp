#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double i,f;
	for (i=0;i<=20;i++)
	{
		f=(i*(9/5))+32;
		cout<<"Fahrenheit equivalent of "<<setw(2)<<i<<" Celsius is: "<<setw(3)<<f<<"F. \n";

	}
	cout<<"\nThank you!";


	return 0;
}