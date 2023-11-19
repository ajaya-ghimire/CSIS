#include <iostream>
#include <string>
using namespace std;

int main()
{
    string students, front, end;
    int num_Students;

    cout<<"\nSTUDENT LINEUP program."<<endl;
    
    cout<<"Enter the number of students: ";
    cin>>num_Students;
    
   while(num_Students<1 && num_Students>25)
    {
        cout<<"ERROR: Enter a number between 1 and 25: ";
        cin>>num_Students;

    }
    cout<<"\nEnter the name of student 1: ";
    cin>>students;
    
    front=end=students;
    if(students<front)
    front = students;
    
     if(students>end)
    end = students;
    
    for (int i=1; i<num_Students; i++)
    {
        cout<<"Enter the name of student "<<i+1<<": ";
        cin>>students;
        
         if(students<front)
    front = students;
    
     if(students>end)
    end = students;
    
    }
    cout<<"\n"<<front<<" will be at the front of the line, and "<<end<<" will be at the end."<<endl;
    
    return 0;
}