#include <iostream>
#include <cstring>
using namespace std;

int strToInt(const char* str, int index) 
{
    // Base case: if the current character is null terminator, return 0
    if (str[index] == '\0') 
    {
        return 0;
    }
    // Recursive case: multiply the result obtained from the next characters by 10 and add the current digit
    return (strToInt(str, index + 1) * 10) + (str[index] - '0');
}

int main() 
{
    const char* str = "12345";
    int result = strToInt(str, 0);
    cout << result << endl;
    return 0;
}
