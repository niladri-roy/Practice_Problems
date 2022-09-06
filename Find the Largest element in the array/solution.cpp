#include <bits/stdc++.h>
using namespace std;

/*void print(int arrayToPrint[], int n)
{
    for(int i=0; i<n; i++){
        cout << arrayToPrint[i] << " ";
    }
    cout << endl;
}*/

int approach1(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[(n-1)];
}

int approach2(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    if (n == 0)
    {
        return 0;
    }
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

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }

    //print(arr, n);
    int ans1 = approach1(arr, n);
    //print(arr, n);
    int ans2 = approach2(arr1, n);
    //print(arr1, n);

    cout << "The largest element: " << endl;
    cout << "According to Approach 1: " << ans1 << endl;
    cout << "According to Approach 2: " << ans2 << endl;
}