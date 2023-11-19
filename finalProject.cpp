#include <iostream>
#include <vector>
#include "finalProject.h"

using namespace std;

int
main ()
{
// For union
  Set Set1;
  Set1.insert (1);
  Set1.insert (2);
  Set1.insert (3);
    
  Set Set2;
  Set2.insert (3);
  Set2.insert (4);
  Set2.insert (5);
  

  cout<<endl<<"        SET OPERATIONS"<<endl;
  cout<<"        .............."<<endl<<endl;
  cout<<"        Set A = ";
  Set1.print();
  cout<<"        Set B = ";
  Set2.print();
  
  cout<<endl<<"        ------------------"<<endl<<endl;
  
  
  // A U B
 Set Set3=Set1+Set2;
 cout<<"        AUB = " ;
 Set3.print ();


//A-B
 Set Set4=Set1-Set2;
 cout<<"        A-B = ";
 Set4.print();
 
 //A*B
 Set Set5=Set1*Set2;
 cout<<"        AnB = ";
 Set5.print();
  
   cout<<endl<<"        ---------"<<endl;
  
  
  
  return 0;
}
