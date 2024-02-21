#include <iostream>

int arraySum(int arr[], int n) 
{
    int sum = 0;
    
    for (int i = 0; i < n; ++i) 
    {
        sum += arr[i];
    }
    
    return sum;
}




#include <iostream>
using namespace std;

int arraySum(int arr[], int size) 
{
    if (size == 0)
        return 0;

    return arr[size - 1] + arraySum(arr, size - 1);
}

int main() 
{
    
    int sum = arraySum(arr, size);
    
    cout <<  sum << endl;

    return 0;
}
