#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& arr, int startIndex) 
{
    // Base case: if there's only one element or no elements left, it's considered sorted
    if (startIndex >= arr.size() - 1)
        return true;

    // Check if the current element is greater than the next element
    if (arr[startIndex] > arr[startIndex + 1])
        return false;

    // Recursive case: check the rest of the array
    return isSorted(arr, startIndex + 1);
}


#include <iostream>

bool isSorted(int arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        if (arr[i] > arr[i + 1]) 
        {
            return false;
        }
    }
    return true;
}