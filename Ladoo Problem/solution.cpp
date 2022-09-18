// Geeks for Geeks
/*
Ladoo problem
Bheem has N friends. And he has a ladoo for each day. 
Given an Array A[] denoting on which day ith friend 
wants a ladoo. If Bheem is unable to give a ladoo to a 
friend, he loses his friendship with them. Find out the 
maximum number of Friends he can have at the end.

Example 1:
Input:
N = 5
A[] = {3, 3, 1, 2, 4}
Output:
4
Explanation:
He will lose either his 1st or 2nd
friend and therefore will be left
with 4 friends.

Example 2:
Input:
N = 2
A[] = {1, 2}
Output:
2
Explanation:
He can give a ladoo to each of his friends,
and will have 2 friends by the end.
*/

// Geeks for Geeks
/*
Find all triplets with zero sum

Given an array of distinct elements. The task is to find
triplets in the array whose sum is zero.

Examples :

Input : arr[] = {0, -1, 2, -3, 1}
Output : (0 -1 1), (2 -3 1)
Explanation : The triplets with zero sum are
0 + -1 + 1 = 0 and 2 + -3 + 1 = 0

Input : arr[] = {1, -2, 1, 0, 5}
Output : 1 -2  1
Explanation : The triplets with zero sum is
1 + -2 + 1 = 0
*/

#include <bits/stdc++.h>
using namespace std;

int approach1(int A[], int N)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        mp[A[i]]++;
    }
    return mp.size();
}

int main()
{
    int n;
    cin >> n;

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    int arr3[n];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    int ans1 = approach1(arr1, n);
    //int ans2 = approach1(arr2, n);
    //int ans3 = approach1(arr3, n);

    cout << ans1 << endl;
}