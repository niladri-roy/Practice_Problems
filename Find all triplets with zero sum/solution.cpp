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

#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> arrayToPrint)
{
    cout << endl;
    for(int i=0; i<arrayToPrint.size(); i++)
    {
        for(int j=0; j<arrayToPrint[i].size(); j++)
        {
            cout << arrayToPrint[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

vector<vector<int>> approach1(int arr[], int n)
{
    vector<vector<int>> ans;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

vector<vector<int>> approach2(int arr[], int n)
{
    vector<vector<int>> ans;

    for(int i=0; i<n; i++)
    {
        int index = arr[i];
        int s = i + 1;
        int e = n - 1;

        while (s < e)
        {
            if (arr[s] + arr[e] + index == 0)
            {
                vector<int> temp;
                temp.push_back(index);
                temp.push_back(arr[s]);
                temp.push_back(arr[e]);

                ans.push_back(temp);
            }
            else if (arr[s] + arr[e] + index < 0)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
    return ans;
}

vector<vector<int>> approach3(int arr[], int n)
{
    vector<vector<int>> ans;
    for(int i=0; i<n-1; i++)
    {
        unordered_set<int> s;
        for(int j=i+1; j<n; j++)
        {
            int remaining = -(arr[i] + arr[j]);
            if(s.find(remaining) != s.end())
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(remaining);

                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int arr1[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }

    int arr2[n];
    for(int i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    int arr3[n];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    vector<vector<int>> ans1 = approach1(arr1, n);
    vector<vector<int>> ans2 = approach1(arr2, n);
    vector<vector<int>> ans3 = approach1(arr3, n);

    print(ans1);
    print(ans2);
    print(ans3);
}