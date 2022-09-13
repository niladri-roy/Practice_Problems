//Striver NQT sheet

#include<bits/stdc++.h>
using namespace std;

void print(int arrayToPrint[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

class Solution{
    public:

    vector<int> approach1(int arr[], int n, int k)
    {
        vector<int> ans;
        

    }
};

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr1[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr1[i];
        }

        int k;
        cin >> k;

        Solution ob;
        vector<int> ans1 = ob.approach1(arr1, n, k);
        vector<int> ans2 = ob.approach2(arr2, n, k);

        print(ans1, n);
        print(ans2, n);
    }
}