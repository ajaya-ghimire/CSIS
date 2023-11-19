#include <iostream>
#include "linkedList.h"

using namespace std;

int main ()
{
    
LinkedList<int> list;
list.append(1);
list.append(2);
list.append(3);
list.append(4);
list.append(5);
cout<<"The elements of the list are "<<endl;
list.print(); 
cout<<"-------------------------------"<<endl<<endl;



// To insert new element at specified position
list.insert(6,5);
cout<<"The new element 6 is inserted at position 5 in the existing data"<<endl;
list.print(); 
cout<<"-------------------------------"<<endl<<endl;


// To reverse the elements
list.reverse();
cout<<"The reverese of the elements of the list are "<<endl;
list.print();
cout<<"-------------------------------"<<endl<<endl;


// To delete any element at specified position
list.deleteAt(0);
cout<<"The list after the item deleted at position 0"<<endl;
list.print(); 

// The use of operator []
list[1]=10;
list.print();
    
    
}