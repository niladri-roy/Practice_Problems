#include <bits/stdc++.h>
using namespace std;

int approach1(int number1, int number2)
{   
    int min_number = min(number1, number2);
    int ans = 0;

    for(int i=1; i<=min_number; i++){
        if(number1%i == 0 && number2%i == 0){
            ans = i;
        }
    }
    cout << ans << endl;
    return ans;
}

int approach2(int number1, int number2)
{
    if(number2 == 0)
    {   
        cout << number1 << endl;
        return number1;
    }
    return approach2(number2, number1 % number2);
}
int main()
{
    int number1;
    int number2;
    cout << "Enter two numbers to find GCD: " << endl;
    cin >> number1;
    cin >> number2;

    int ans1 = approach1(number1, number2);
    int ans2 = approach2(number1, number2);
    
    cout << "The GCD of two numbers "<< endl;
    cout << "According to approach 1 : " << ans1 << endl;
    cout << "According to approach 2 : " << ans2 << endl;
}