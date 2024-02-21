#include <iostream>
#include <vector>
using namespace std;

// Recursive binary search function
int binary(const vector<int>& arr, int s, int e, int target) 
{
    if (s > e) 
    {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == target) 
    {
        return mid;
    } 

    else if (arr[mid] > target) 
    {
        return binary(arr, s, mid - 1, target);
    } 

    else 
    {
        return binary(arr, mid + 1, e, target);
    }
}

// Wrapper function for binary search

int binary(const vector<int>& arr, int target) 
{
    int n = arr.size();
    return binary(arr, 0, n - 1, target);
}

int main() 
{
    int index = binary(arr, target);

    if (index != -1) 
    {
        cout << "Ele found at index " << index << std::endl;
    } 

    else 
    {
        cout << "Ele not found in the array" << std::endl;
    }

    return 0;
}
