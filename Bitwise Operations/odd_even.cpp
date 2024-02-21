
// using and operator

#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin >> num;

    if (num & 1) 
    {
        cout << num << " is odd." << endl;
    } 
    else 
    {
        cout << num << " is even." << endl;
    }

    return 0;
}
