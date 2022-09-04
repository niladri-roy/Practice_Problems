#include <bits/stdc++.h>
using namespace std;

void print(int arrayToPrint[], int n)
{
    for(int i=0; i<n; i++){
        cout << arrayToPrint[i] << " ";
    }
    cout << endl;
}

void approach1(int arr[], int n)
{
    int ans[n];
    for(int i=0; i<n; i++){
        ans[n-i-1] = arr[i];
    }
    print(ans, n);
}

void approach2(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = arr[i];
    }

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    print(arr, n);

}

void approach3(int arr[], int start, int end, int n)
{
    if(start > end)
    {
        print(arr, n);
        return;
    }

    swap(arr[start], arr[end]);
    return approach3(arr, start+1, end-1, n);
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

    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = arr[i];
    }
    
    cout << "The reversed array: " << endl;

    cout << "According to approach 1 :" << endl;
    approach1(arr, n);

    cout << "According to approach 2 :" << endl;
    approach2(arr, n);

    cout << "According to approach 3 :" << endl;
    approach3(ans, 0, n-1, n);
}