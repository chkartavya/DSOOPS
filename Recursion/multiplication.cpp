// using Addition

#include <iostream>
using namespace std;

int multiply(int n, int k) 
{
    //Base Case
   if(k==0)
   return 0;
    
    //recursive case
    return n + multiply(n, k - 1);
}

int main() 
{
    int n1, n2;
    cin >> n1 >> n2;
    
    int res = multiply(n1, n2);

    cout << res << endl;
    
    return 0;
}

// Using Multiplication

// #include <iostream>
// using namespace std;

// int multiply(int a, int b) 
// {
//     if (a == 0 || b == 0)
//         return 0;
    
//     if (a == 1)
//         return b;
//     if (b == 1)
//         return a;
    
//     return a + multiply(a, b - 1);
// }

// int main() 
// {
//     int n1, n2;
//     cin >> n1 >> n2;
    
//     int res = multiply(n1, n2);

//     cout << res << endl;
    
//     return 0;
// }
