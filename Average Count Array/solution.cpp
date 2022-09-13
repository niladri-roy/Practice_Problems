// Geeks for Geeks
/*
You are given an integer 'n' which denote the number
of elements in an array a[ ] and an integer 'x'.
You have to calculate the average of element a[i]
and x and find out if that number exist in array or not.
Do it for all the elements of array and store the count
result in another array for each index i.

Note: Always take the floor value of the average.

Input : arr[ ] = {2, 4, 8, 6, 2} and 
        X = 2
Output : 2 0 0 1 2
Explanation:
value of n is 5 and that of x is 2.
The array is 2 4 8 6 2. We take x
i.e. 2 and take average with a[0]
which is equal to 2. We found 2 resides
in array at two positions (1st and 5th
element) thus storing 2 in another
array at 0th index. Similarly do for all
elements and store the count in second
array.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> approach1(int a[], int n, int x)
{

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int avg = floor((a[i] + x) / 2);
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (avg == a[j])
                count++;
        }
        ans.push_back(count);
    }
    return ans;
}

vector<int> approach2(int a[], int n, int k)
{
    vector<int> ans(n);
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        /*
        here in the map we are storing the elements of the
        given vector and their frequency as the key
        */ 
        mp[a[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        /*
        Now,
        here we are finding the value of average in the map 
        and putting the frequency of that value in the vector if the 
        value of average is present.
        */
        ans[i] = mp[(a[i]+k)/2];
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
        cin >> a[i];
    }

    int k;
    cin >> k;

    vector<int> ans1 = approach1(a, n, k);
    for(int i=0; i<n; i++)
    {
        cout << ans1[i] << " ";
    }

    cout << endl;

    vector<int> ans2 = approach2(a, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << ans2[i] << " ";
    }
}
