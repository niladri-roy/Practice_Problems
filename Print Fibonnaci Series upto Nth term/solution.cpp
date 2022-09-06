#include <bits/stdc++.h>
using namespace std;

void print(int arrayToPrint[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arrayToPrint[i] << " ";
    }
    cout << endl;
}

void approach1(int first, int second, int n)
{
    int fib[n];
    fib[0] = first;
    fib[1] = second;

    for(int i=2; i<(n); i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    print(fib, n);
}

void approach2(int first, int second, int n)
{
    
}

void approach3(int first, int second, int n)
{
    
}

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int first = 0;
    int second = 1;

    cout << "The Fibonacci Series upto " << n << "th term: " << endl;

    cout << "According to approach 1 :" << endl;
    approach1(first, second, n);

    /*cout << "According to approach 2 :" << endl;
    approach2(first, second, n);

    cout << "According to approach 3 :" << endl;
    approach3(first, second, n);*/
}