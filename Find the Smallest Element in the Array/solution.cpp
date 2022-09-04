#include <bits/stdc++.h>
using namespace std;

int approach1(int arr[], int n)
{   
    sort(arr, arr+n);
    return arr[0];
}

int approach2(int arr[], int n)
{
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        mini = min(mini, arr[i]);
    }
    return mini;
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

    cout << "The smallest element: " << endl;
    cout << "According to Approach 1: " << ans1 << endl;
    cout << "According to Approach 2: " << ans2 << endl;
}