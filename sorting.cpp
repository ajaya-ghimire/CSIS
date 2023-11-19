// Sorting names in Alphabetical order
#include <iostream>
#include <string>
using namespace std;

void selectionSort(string[], int);
void swap(string &, string &);
void displayArray(string[], int, string);

int main() {
    const int num_names = 20;
    string names[num_names] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                               "James, Jean", "Weaver, Jim", "Pore, Bob",
                               "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };
    displayArray(names, num_names, "UNSORTED: \n--------------------");

    selectionSort(names, num_names);

    displayArray(names, num_names, "SORTED: \n-------------------- ");

    return 0;
}

void selectionSort(string array[], int size)
{
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (size - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < size; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }
        swap(array[min_index], array[start_index]);
    }
}

void swap(string &r, string &s)
{
    string temp = r;
    r = s;
    s = temp;
}

void displayArray(string array[], int size, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < size; i++)
        cout << array[i] << endl;
    cout << endl;
}
