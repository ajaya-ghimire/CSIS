#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number within a range 1 to 10: ";
	cin>>num;

	if(num<1||num>10)
		cout<<"This number is out of the range.";

	else
		switch(num)
	{
		case 1: cout<<"The roman numeral version of "<<num<<" is I.\n";
	    break;
	    case 2: cout<<"The roman numeral version of "<<num<<" is II.\n";
	    break;
	    case 3: cout<<"The roman numeral version of "<<num<<" is III.\n";
	    break;
	    case 4: cout<<"The roman numeral version of "<<num<<" is IV.\n";
	    break;
	    case 5: cout<<"The roman numeral version of "<<num<<" is V.\n";
	    break;
	    case 6: cout<<"The roman numeral version of "<<num<<" is VI.\n";
	    break;
	    case 7: cout<<"The roman numeral version of "<<num<<" is VII.\n";
	    break;
	    case 8: cout<<"The roman numeral version of "<<num<<" is VIII.\n";
	    break;
	    case 9: cout<<"The roman numeral version of "<<num<<" is IX.\n";
	    break;
	    case 10: cout<<"The roman numeral version of "<<num<<" is X.\n";
	    break;
	    default: cout<<"An ERROR occured\n";
	}



	


	return 0;
}