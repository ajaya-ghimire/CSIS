#include <iostream>
using namespace std;

int main()
{
	int month, day, year;
	cout<<"Enter (in numeric form) month, day and year (year in two digits): ";
	cin>>month>>day>>year;

	if (year<10 || year>99)
		cout<<"Enter year in two digits! ";
	else
		if (month*day==year)
			cout<<"The date is magic. ";
		else
			cout<<"The date is not magic. ";

	



	return 0;
}