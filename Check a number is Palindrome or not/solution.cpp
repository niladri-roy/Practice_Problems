/*This problem is from leetcode*/

#include <bits/stdc++.h>
using namespace std;

bool reverse(int number)
{
    int rem = 0;
    int digit;
    int temp = number;
    while (temp > 0)
    {
        digit = temp % 10;
        rem = (rem * 10) + digit;
        temp = temp / 10;
    }
    if(rem == number){
        return true;
    }
    return false;
}

int main()
{
    int number;
    cout << "Enter a number which need to be reversed: ";
    cin >> number;

    bool ans = reverse(number);
    cout << "The number you have entered : " << number << endl;
    cout << "The number is Palindrome : " << ans << endl;
}