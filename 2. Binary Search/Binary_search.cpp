#include <iostream>
using namespace std;

int Binary_search(int arr[], int t, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == t)
            return mid;
        if (arr[mid] < t)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    cout << "Binary Search" << endl;
    int size;
    cout << "Enter how many number: ";
    cin >> size;
    int arr[size];

    cout << "Enter Ascending Number: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Which number you want to search: ";
    cin >> target;

    int index = Binary_search(arr, target, 0, (size - 1));
    if (index == -1)

        cout << "Not Found";

    else
        cout << "Yes, Found. Index is: " << (index + 1);
}