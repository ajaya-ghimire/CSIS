#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float starting, increase, days, total;
	float x, y ,sum,p, per;
	int i;
	


	cout<<"\nThis program will predict the size of a population of organism.\n";



	cout<<"Enter the starting number of organism: ";
	cin>>starting;
	cout<<"Enter their average daily population increase (as percentage) : ";
	cin>>increase;
	cout<<"Enter the number of days they will multiply : ";
	cin>>days;

	while (starting<2)
	{
		cout<<"The starting number should be greater than 2."
	        <<"Enter the starting number of organism: ";
	    cin>>starting;

	}
		

	while (increase<0)
	{
		cout<<"Increase (percentage) must be positive."
	        <<"Enter their average daily population increase (as percentage) : ";
	    cin>>increase;
	}
		
	   
	while (days<1)
	{
		cout<<"The number of days they will multiply must be greater than 1."
	        <<"Enter the number of days they will multiply : ";
	    cin>>days;
	}





	/////////////////////////////////////////////////////////////////////////////



	for (i=1; i<=days ;i++) //days, program repeats upto given days
	{
		
		cout<<"Population of Day "<<i
		<<" is: "<<starting<<".\n";
		per=increase/100;
		x=per*starting;
		starting+=x;
    }


	/////////////////////////////////////////////////////////////////////////////
	        
	  cout<<"\nThank you! \n"<<endl;      




	return 0;  


} 




	


	
	

	     
	                       

		   


         




	



	
		




		

			
	    
      



    

	   



	    


	

		
	
	


		

		
		

	



		





	


