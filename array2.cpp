// Add elemnts in an Array
#include <iostream>
using namespace std;

int* expand (int [], const int);
void displayArray(int* , const int);

int main()
{
	const int length = 5;
	int ary [length] = {1, 2, 3, 4, 5};
	int* num_expand = expand(ary, length);

	displayArray(ary, length);
	cout << endl;
	displayArray( num_expand, (length * 2));
	cout << endl << endl;

	delete [] num_expand;
	num_expand = nullptr;

	return 0;

}

int *expand(int array[], const int length)
{
    const int NEW_SIZE = length * 2;
    int *newArray = new int[NEW_SIZE];

    for (int i = 0; i < NEW_SIZE; i++)
    {
        if (i >= length)
            *(newArray + i) = 0;
        else
            *(newArray + i) = array[i];

    }

    return newArray;
}

    void displayArray(int *array, const int length)
{
    for (int i = 0; i < length; i++)
        cout << *(array + i) << " ";
}

