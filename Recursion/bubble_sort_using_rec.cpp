#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble(vector<int> &arr, int n) 
{
    if (n == 1)
        return n;
    
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    
    bubble(arr, n - 1);
}

int main() 
{
    int n = arr.size();
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    bubble(arr, n);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
