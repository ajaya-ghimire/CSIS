#include <iostream>

using namespace std;

int main()
{
  cout<<"\nThis program determines the smallest and the largest number. (Enter -99 to stop)\n";
   double number, greatest, smallest, i=0 ;
  
   while(number !=-99)
   {
        cout<<"Enter the numbers: ";
        cin>>number;


       ///////////////////////////////////////////////////////// 
       if(i==0)
       {
         greatest=number;
         smallest=number;
       }
       else
       {
        if (number>greatest && number !=-99)
        greatest=number;
        else if (number<smallest && number !=-99)
        smallest=number;
       }
       ////////////////////////////////////////////////////////
       

       i++;
   }




   while (greatest==-99 && smallest==-99)
   {
    cout<<"The program is terminated!"<<endl;
   return 0;
   }
   cout<<"\nThe largest number is "<<greatest<<"."<<endl;
   cout<<"The smallest number is "<<smallest<<"."<<endl;
   cout<<"Thank you!"<<endl;
   
   return 0;
}
