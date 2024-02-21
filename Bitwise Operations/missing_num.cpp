// #include <iostream>
// using namespace std;


// int main() 
// {
//     int n;
//     cin >> n;

//     vectors<int> a(n-1);
//      for (int i = 0; i < n-1; ++i) 
//     {
//         cin >> a[i];
//     }

//     int x=0;

//     for(int val=1; val<=n;val++)
//     {
//         x =( x^val);
//     }

//     for(int i=0; i<n-1; i++)
//     {
//         x =( x^a[i]);
//     }

//     cout << x << endl;
//     return 0;

// }


#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) 
{
    int Arr = 0;
    int Num = 0; 

    for (int i = 0; i < n; ++i) 
    {
        Arr ^= arr[i];
    }

    for (int i = 1; i <= n + 1; ++i) 
    {
        Num ^= i;
    }

    return Arr ^ Num;
}

int main() 
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int missingNumber = findMissingNumber(arr, n);
    cout <<  missingNumber << endl;
    return 0;
}
