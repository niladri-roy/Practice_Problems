//Geeks for Geeks
/*
Given a sorted array arr[] of distinct integers. Sort the 
array into a wave-like array(In Place).
In other words, arrange the elements into a sequence such 
that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

If there are multiple solutions, find the 
lexicographically smallest one.

Example 1:
Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after
sorting it in wave form are
2 1 4 3 5.

Example 2:
Input:
n = 6
arr[] = {2,4,7,8,9,10}
Output: 4 2 8 7 10 9
Explanation: Array elements after
sorting it in wave form are
4 2 8 7 10 9.
*/

#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arrayToPrint, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arrayToPrint[i] << " ";
    }
    cout << endl;
}

void approach1(int n, vector<int> &arr)
{

    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr1(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }

    approach1(n, arr1);
    print(arr1, n);
}