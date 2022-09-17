#include <iostream>
using namespace std;
void process(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}
void display(int array[], int size)
{
    cout << "Sorting Data: ";
    for (int i = 0; i < size; i++)
    {

        cout << array[i] << "  ";
    }
    cout << endl;
    cout << "------------------------------" << endl;
}
int main()
{
    cout << "Insertion Sort and Binary Search" << endl;
    int size;
    cout << "Enter how many number: ";
    cin >> size;
    int array[size];

    cout << "Enter Number: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    process(array, size);
    display(array, size);
}