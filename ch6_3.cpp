/*
******************
PRESENT VALUE
******************
*/

#include <iostream>
#include <cmath>
using namespace std;

double presentValue(double, double, double);

int main()
{
	double a,b,c;

	cout<<"\nPRESENT VALUE"<<endl;
	
	cout<<"Enter the Future Value you'd like to have: $";
	cin>>a;
	cout<<"Enter the Annual Interest Rate (%): ";
	cin>>b;
	cout<<"Enter the no. of years you want to let your money be in the account: ";
	cin>>c;

	double p=presentValue(a,b,c);


	cout<<"The Present Value you should keep is $"<<p<<"."<<endl;
	return 0;
}

double presentValue(double f,double r, double n)
{
double p;
p=f/pow((1+r),n);
return p;
}