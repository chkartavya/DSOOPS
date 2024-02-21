#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    int ct= 0 ;

    while(num > 0)
    {
        int rem = num % 2;
        if(rem==1)
        {
            ct++;
        }
        num = num / 2;
    }

    cout << ct << endl;
    return 0;
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;

//     int d=0;
//     while(num!=0)
//     {
//         int rem = num % 2;
//         d = d * 10 + rem;
//         num = num / 2;
//     }

//     int n=0;
//     while(d!=0)
//     {
//         int r = d % 10;
//         n = n * 10 + r;
//         d = d/10;
//     }

//     cout << n << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;
//     int place = 1;
//     int ans=0;

//     while(num>0)
//     {
//         int rem = num%2;
//         ans = ans +place*rem;
//         num = num/2;
//         place = place*10;
//     }
    
//     cout << ans << endl;
    
//     return 0;
// }