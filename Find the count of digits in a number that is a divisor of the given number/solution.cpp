#include <bits/stdc++.h>
using namespace std;

int approach1(int number)
{
    int count = 0;
    int digit = 0;
    int temp = number;
    while (temp != 0)
    {
        digit = temp % 10;

        if(digit != 0 && number % digit == 0){
            count++;
        }
        temp = temp / 10;
    }
    return count;
}

int main()
{

    int number;
    cout << "Enter a number : ";
    cin >> number;

    cout << "The count of digits in a the number that is a divisor of the given number :" << endl;

    int ans1 = approach1(number);
    cout << "According to approach 1: " << ans1 << endl;
}