#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& arr, int left, int right) 
{
    if (left < right) 
    {
        // Find the middle point
        int mid = left + (right - left) / 2;

        // Recursive call on the left and right halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() 
{
    int n = arr.size();
    int arr[] ={5,4,3,2,1}
    

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

