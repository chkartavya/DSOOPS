#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int x=1

    while(1)
    {
        if(x>n)
        {
            cout << x << endl;
            break;
        }
        x= (x << 1);
    }
    return 0;
}