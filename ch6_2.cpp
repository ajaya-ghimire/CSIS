/*
***********************
COIN TOSS
***********************
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void choices(int, int);

int main()
{
   srand(time(0));
   int count;

   cout <<"\nCOIN TOSS"<<endl;


   cout<<"How many times should the coin be tossed? ";
   cin>>count;

   for (int i = 0; i < count; i++)
   {
   	cout<<i+1<<". ";
     choices(1, 2);
     cout<<endl;

   }

   cout<<"Thank you!"<<endl;
}

void choices(int min, int max)
{
	int x;
	x=rand() % max + min;
	if (x==1)
		cout<<"Heads!";
	else
		cout<<"Tails!";

	}


  