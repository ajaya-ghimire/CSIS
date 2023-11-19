/*
********************************
ROCK, PAPER, SCISSOR GAME
********************************
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function Prototype
void startingPrompt();
int user(int);
int bot(int);



//Main Function
int main()
{
	

	//User Entry
	int choice;
	startingPrompt();
	cout<<"Enter your choice: ";
    cin>>choice;
	user(choice);
if (choice<4 && choice>0)
{
	//Computer choice
	xyz:
	srand(time(0));
	int min=1,max=3;
	int cBot=rand() % max + min;
	bot(cBot);

	//Result
	if (choice==1 && cBot==2)
	 cout<<"You lose!"<<endl;
	if (choice==1 && cBot==3)
		cout<<"You win!"<<endl;

	if (choice==2 && cBot==3)
		cout<<"You lose!"<<endl;
	if (choice==2 && cBot==1)
		cout<<"You win!"<<endl;

	if (choice==3 && cBot==1)
		cout<<"You lose!"<<endl;
	if (choice==3 && cBot==2)
		cout<<"You win!"<<endl;
	
	if (choice==cBot)
	{
		cout<<"Nobody wins! Try again!"<<endl;
		cout<<"Enter your choice: ";
        cin>>choice;
		user(choice);

		goto xyz;
	}
}
	cout<<endl;
	return 0;
}



//Welcome Prompt and insctrctions
void startingPrompt()
{
	cout <<"\nROCK, PAPER, SCISSOR GAME"<<endl;
	cout<<"Welcome!"<<endl;

	cout <<"\nEnter 1, 2 or 3."<<endl;
	cout<<"1 for ROCK."<<endl;
	cout<<"2 for PAPER."<<endl;
	cout<<"3 for SCISSOR."<<endl;
    cout<<endl;
}


//User entry block
int user(int choice)
{
// int choice;
    if (choice==1)
    	cout<<"Your choice is Rock."<<endl;
    else if (choice==2)
    	cout<<"Your choice is Paper."<<endl;
    else if (choice==3)
    	cout<<"Your choice is Scissor."<<endl;
    else
    {
    	cout<<"\nError! Enter 1,2 or 3."<<endl; 

    }
   
    
    return choice;	
}


//Random choice of bot
int bot(int cBot)
{
	
	if(cBot==1)
	cout<<"Computer's choice is Rock."<<endl;
    else if (cBot==2)
	cout<<"Computer's choice is Paper."<<endl;
    else
	cout<<"Computer's choice is Scissor."<<endl;
	
	return cBot;
}



	
















