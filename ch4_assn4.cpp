#include <iostream>
using namespace std;

int main()
{
	float l1, l2, w1, w2, a1, a2;
	cout<<"Enter length and width of the FIRST rectangle: ";
	cin>>l1>>w1;
	cout<<"Enter length and width of the SECOND rectangle: ";
	cin>>l2>>w2;

	a1=l1*w1;
	a2=l2*w2;

	if (a1>a2)
		cout<<"The FIRST rectangle is larger than the SECOND rectangle. ";
	else if (a1==a2)
		cout<<"Both of the recangles are equal. ";
	else
		cout<<"The SECOND rectangle is larger than the FIRST rectangle. ";


	return 0;
}
