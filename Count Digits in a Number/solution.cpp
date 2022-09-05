#include <bits/stdc++.h>
using namespace std;

int approach1(int number)
{
    int count = 0;
    int rem = 0;
    while(number != 0)
    {

        rem = number % 10;
        count++;
        number = number/10;
    }
    return count;
}

int approach2(int number)
{
    string num = to_string(number);
    return num.length();
}

int approach3(int number)
{
    return floor(log10(number) + 1);
}

int main()
{

    int number;
    cout << "Enter a number whose number of digits need to be count : ";
    cin >> number;

    cout << "The Number of digits: " << endl;

    int ans1 = approach1(number);
    cout << "According to approach 1: " << ans1 << endl;

    int ans2 = approach2(number);
    cout << "According to approach 2: " << ans2 << endl;

    int ans3 = approach3(number);
    cout << "According to approach 3: " << ans3 << endl;
}