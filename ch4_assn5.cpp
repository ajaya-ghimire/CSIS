#include <iostream>
using namespace std;

int main()
{
	float height, weight,bmi;

	cout<<"Enter your HEIGHT(in inches) and WEIGHT(in pounds): ";
	cin>>height>>weight;

	bmi=(weight*703)/(height*height);

	cout<<"Your BMI is: "<<bmi<<"\n";


	if (bmi>18.5 && bmi<25)
		cout<<"Your weight is optimal. ";

	else if (bmi<=18.5)
		cout<<"You are underweight. ";

	else 
		cout<<"You are overweight. ";











	return 0;
}