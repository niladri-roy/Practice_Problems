#include <bits/stdc++.h>
using namespace std;

int approach1(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[(n-1)];
}

int approach2(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the element is the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans1 = approach1(arr, n);
    int ans2 = approach2(arr, n);

    cout << "The largest element: " << endl;
    cout << "According to Approach 1: " << ans1 << endl;
    cout << "According to Approach 2: " << ans2 << endl;
}