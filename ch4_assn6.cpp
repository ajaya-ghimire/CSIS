#include <iostream>
using namespace std;

int main()
{
	float weight, mass;

	cout<<"Enter your mass (in kilograms) : ";
	cin>>mass;


	weight=mass*9.8;

	cout<<"The weight is: "<<weight<<" newton."<<endl;

	if (weight < 10)
		cout<<"The object is too light. ";

	else if (weight > 1000)
		cout<<"The object is too heavy. ";









	return 0;
}