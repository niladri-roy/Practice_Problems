/*
What is a Median?
Median is defined as the value which is present in
the middle for a series of values. Note, in order to
find the median of an array of integers, we must make
sure they are sorted.

Examples:

Example 1:
Input: [2,4,1,3,5]
Output: 3

Example 2:
Input: [2,5,1,7]
Output: 3.5
*/

#include<bits/stdc++.h>
using namespace std;

void approach1(int arr[], int n)
{
    sort(arr,arr+n);

    if(n%2 == 0)
    {
        int a = (n/2)-1;
        int b = n/2;

        cout<<(double)(arr[a]+arr[b])/2;
    }
    else
    {
        cout << arr[(n/2)];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    approach1(arr, n);

}