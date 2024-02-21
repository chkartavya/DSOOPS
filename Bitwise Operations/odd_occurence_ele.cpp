// Left shift: x << y : x*(2**y) x- num, y-no of times.
// cout << (10 << 3) = 80

// Right shift: x >> y : x /(2**y)  x- num, y-no of times.
// cout << (10 >> 3) = 1



#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int x =0;
    for(int i=0 ; i<n ; i++)
    {
        x = (x^a[i]);
    }
    cout << x << endl;
    return 0;
}
