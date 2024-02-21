#include <iostream>
#include <cstring>
using namespace std;

int solve(char *arr, int n) 
{
    // Base case: if the current character is null terminator, return 0
    if (n =='\0'|| n==0) 
    {
        return 0;
    }

    // Recursive case: multiply the result obtained from the next characters by 10 and add the current digit
    int last_dig = arr[n-1] -'0';
    int small_ans = solve(arr,n-1);

    int large_ans = small_ans*10 + last_dig;
    return large_ans;

}

int main() 
{
    char arr[] = "1 2 3 4 5";
    cout << solve(arr,strlen(arr)) << endl;

    return 0;
}
