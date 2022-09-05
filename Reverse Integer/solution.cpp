/*This problem is from leetcode*/

#include<bits/stdc++.h>
using namespace std;

int reverse(int number)
{
    int rem = 0;
    int digit;

    while(number!=0){

        digit = number%10;
        if(rem > INT_MAX/10 || rem < INT_MIN/10){
            return 0;
        }

        rem = (rem * 10) + digit;
        number = number/10;
    }
    return rem;
}

int main()
{
    int number;
    cout << "Enter a number which need to be reversed: ";
    cin >> number;

    int ans = reverse(number);
    cout << "The number you have entered : " << number <<  endl;
    cout << "The number after reversed : " << ans << endl;
}