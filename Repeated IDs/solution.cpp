// Geeks for Geeks
/*
Geek is given a task to select at most 10 employees for a
company project. Each employee is represented by a single
digit ID number which is unique for all the selected
employees for the project. Geek has a technical problem
in his system which printed ID number multiple times.
You are given array a[ ] of N elements having all printed
IDs. Help him to get rid of the repeated IDs.

Input:
N = 5
a[ ] = {8, 8, 6, 2, 1}
Output:
8 6 2 1
*/
#include<bits/stdc++.h>
using namespace std;

/*vector<int> approach1(int a[], int n)
{
    vector<int> ans;
    return ans;
}*/

vector<int> approach2(int a[], int n)
{
    vector<int> ans;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        if (mp[a[i]] == 1)
            ans.push_back(a[i]);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >>  a[i];
    }

    /*vector<int> ans1 = approach1(a, n);
    for(int i=0; i<ans1.size(); i++)
    {
        cout << ans1[i] << " ";
    }
    cout << endl;*/

    vector<int> ans2 = approach2(a, n);
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " ";
    }
    cout << endl;
}