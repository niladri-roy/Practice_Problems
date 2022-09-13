// Geeks for Geeks
/*
You have records of employee name as string (E_name)
and salary as positive integer (S). You have to sort
the records on the basis of employee salary, if salary
is same then use employee name for comparison.

Example 1:

Input: N = 2
arr[] = {{xbnnskd, 100}, {geek, 50}}
Output: {geek 50}, {xbnnskd 100}
Explanation: geek has lowest salary
as 50 and xbnnskd has more salary.
Example 2:

Input: N = 2
arr[] = {{shyam, 50}, {ram, 50}}
Output: ram 50 shyam 50
*/

#include<bits/stdc++.h>
using namespace std;
struct node{
    int salary;
    string name;
};

class Solution{
    public:
        static bool compareNameSalary(node a, node b)
        {
            if (a.salary == b.salary)
            {
                return a.name < b.name;
            }
            return a.salary < b.salary;
        }
        void approach1(node arr[], int n)
        {
            sort(arr, arr + n, compareNameSalary);
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

        node arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i].name >> arr[i].salary;
        }

        Solution ob;
        ob.approach1(arr, n);
        for(int i=0; i<n; i++)
        {
            cout << arr[i].name << " " << arr[i].salary<< endl;
        }
    }
}