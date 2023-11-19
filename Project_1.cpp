#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>

using namespace std;

int main()

{
int i=1;
   ofstream ajaya;
   ajaya.open("Project_1.txt");
   
   
   

   cout<<"  \n  PYTHAGOREAN Theorem: \n";

   cout<<"  Side A(squared)"<<"        Side B(squared)"<<"        Hypotenuse(squared)"<<endl;
   
   
   ajaya<<"\n  PYTHAGOREAN Theorem: \n";
   
   
   ajaya<<"  Side A(squared)"<<"        Side B(squared)"<<"        Hypotenuse(squared)"<<endl;
   
  	
  	for(int a=1; a<=500; a++)
  	for(int b=1; b<=500; b++)
  	for(int c=1; c<=500; c++)
  	
  	    if( pow(a,2)+pow(b,2)==pow(c,2))
  	    {
  	    cout<<i<<"."<<setw(8)<<a<<setw(4)<<"  *  "<<a<<setw(8)<<"+"<<setw(8)<<b<<setw(4)<<" * "<<setw(4)<<b<<setw(8)<<"="<<setw(8)<<c<<setw(4)<<" * "<<c<<endl;
    
      	    ajaya<<i<<"."<<setw(8)<<a<<setw(4)<<"  *  "<<a<<setw(8)<<"+"<<setw(8)<<b<<setw(4)<<" * "<<setw(4)<<b<<setw(8)<<"="<<setw(8)<<c<<setw(4)<<" * "<<c<<endl;
    i++;
  	    }
    
    
    ajaya.close();
    return 0;
}