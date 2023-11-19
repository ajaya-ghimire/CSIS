// Remove element, add element in Array
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int *new_element(const int *, int);

int main()
{
	const int SIZE = 7;
	int number[SIZE] = {5, 10, 15, 20, 25, 30, 35};
	int *newArray;
	char repeat;



		newArray = new_element(number, SIZE);

		cout << "Original Array:\n";

		for(int i = 0; i < SIZE ; i++)
		{
			cout << number[i] << " ";
		}

		cout << "\nDuplicate Array:\n";
		for(int i = 0; i < SIZE ; i++)
		{
         cout << newArray[i] << " ";
		}

       delete [] newArray;
       newArray = nullptr;
	return 0;
}

int *new_element(const int *number, int size)
{
	int *newArray;

	newArray = new int[size + 1];
	newArray[0] = 0;

	for(int i = 0; i < size; i++)
	{
		newArray[i + 1] = number[i];
	}

	return newArray;
}
