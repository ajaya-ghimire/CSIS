#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int years, months, total_months;
	double inches, average, total;


	cout<<"This program will display the average rainfall. \n";

	


	cout<<"Enter the number of years you want to calculate average rainfall of : ";
	cin>>years;


	while (years<1)
	{
		cout<<"Years must be at least 1.\n "
		    <<"Enter the number of years you want to calculate average rainfall of : ";
		cin>>years;

	}





	for (int i=1; i<=years ;i++)
	{
		cout<<"\nYear "<<i<<endl;

		for (int month=1; month<=12; month++)
		{
			cout<<"Number of inches of rain for month "
		        <<month<<"? ";
		        cin>>inches;


		        while (inches<0)
		        {
		        	cout<<"Rainfall must be zero or greater. \n "
		                <<"Number of inches of rainfall for the month: ";
		                cin>>inches;
		        }
		        //accumulate the rainfall
		        total+=inches;
		}


	}

	total_months=years*12;
	average=total/total_months;

	cout<<"\nOver a period of "<<total_months <<" months, "
	     <<total<<" inches of rain fell. \n";

	cout<<fixed<<showpoint<<setprecision(3);
	cout<<"AVERAGE RAINFALL FOR THE PERIOD IS "
	    <<average<<" inches.\n\n";





	return 0;
}