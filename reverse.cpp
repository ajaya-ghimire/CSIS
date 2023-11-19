// Prints the elements of an Array in reverse
#include <iostream>
using namespace std;

int *reverse(int [], const int);
void displayArray(int *, const int);

int main()
{
    const int length = 10;
    int numbers[length] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

    int *num_rev = reverse(numbers, length);

    cout << endl;
    displayArray(numbers, length);
    cout << endl;
    displayArray(num_rev, length);

    delete [] num_rev;
    num_rev = nullptr; // 0x0

    return 0;
}
int *reverse(int array[], const int length)
{
    int *newArray = new int[length];

    int j = (length - 1);

    for (int i = 0; i < length; i++, j--)
        *(newArray + i) = array[j];

    return newArray;
}
void displayArray(int *array, const int length)
{
    for (int i = 0; i < length; i++)
        cout << *(array + i) << " ";
}
