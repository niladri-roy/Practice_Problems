#include<iostream>
using namespace std;

void print(bool ans)
{
    if (ans == 1)
    {
        cout << "The array is sorted" << endl;
    }
    else
    {
        cout << "The array is not sorted" << endl;
    }
}

bool approach1(int arr[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;

}

bool approach2(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the size if the array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[n];
    }

    cout << "According to approach 1 : ";
    bool ans1 = approach1(arr, n);
    cout << ans1 << endl;
    print(ans1);

    cout << "According to approach 2 : ";
    bool ans2 = approach2(arr, n);
    cout << ans2 << endl;
    print(ans2);
}