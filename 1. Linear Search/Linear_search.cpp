#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int T)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == T)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter how many number: ";
    cin >> size;
    int array[size];

    cout << "Enter Disit: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;
    int index = linear_search(array, size, target);
    if (index == -1)
    {
        cout << "NOT FOUND";
    }
    else
        cout << "FOUND, Index is: " << (index + 1);

    return 0;
}