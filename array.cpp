// Takes user input for the size of array, elements in the array and print them.
#include<iostream>
using namespace std;

int num(int number);
int* allocates (int num);


int main()
{
 int number=0;
 int *array;
 number=num(number);
 array=allocates(number);
 for(int i=0;i<number;i++)
 {
 cout<<array[i]<<endl;
 }

}

int num(int number)
{
 cout<<"Enter an array size \n";
 cin>>number;
 return number;
}
int* allocates (int num)
{
 int *array=new int(num);

 for(int i=0;i<num;i++)
 {
 cout<<"Enter number"<< i+1<<endl;
 cin>>array[i];
 }

 return array;

}
