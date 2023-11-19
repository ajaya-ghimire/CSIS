// Calculate average rainfall, determine lowest and highest rainfall
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


double getTotal(double[], int);
double getAverage(double[], int);
double getHighest(double[], int, int&);
double getLowest(double[], int, int&);

const int MONTHS = 12;
string months[MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

double rainfall[12];

int main()
{
    cout << "Enter the rainfall for " << endl;
    for (int index = 0; index < 12; index++)
	{
		cout << left << setw(10);
		cout << months[index] << ": " << setw(5);
		cin >> rainfall[index];

	}

	int lowest, highest;
	double low, high;

	cout <<"The total rainfall is " << getTotal(rainfall, MONTHS)<< endl;
	cout <<"The average rainfall is " << getAverage(rainfall, MONTHS)<< endl;

	low = getLowest(rainfall, MONTHS, lowest);
	high = getHighest(rainfall, MONTHS, highest);

	cout << months[lowest] << " has the lowest rainfall at " << low << endl;
	cout << months[highest] << " has the highest rainfall at " << high << endl << endl;

	return 0;

}


double getTotal(double rainfall[], int size)
{
    double total;
    for (int index = 0; index < size; index++)
	{
		total += rainfall[index];
	}
	return total;
}

double getAverage(double rainfall[], int months)
{
	double average = getTotal(rainfall, MONTHS) / months;
	return average;
}

double getLowest(double rainfall[], int size, int &lowestIndex)
{
	double lowest = rainfall[0];
	for (int index = 0; index < size; index++)
	{
		if (rainfall[index] <= lowest)
		{
			lowest = rainfall[index];
			lowestIndex = index;
		}
	}
	return lowest;
}
double getHighest(double rainfall[], int size, int &highestIndex)
{
	double highest = rainfall[0];
	for (int index = 0; index < size; index++)
	{
		if (rainfall[index] >= highest)
		{
			highest = rainfall[index];
				highestIndex = index;
		}
	}
	return highest;
}









