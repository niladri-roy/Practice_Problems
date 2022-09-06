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
    /*  Where we are going to sort the array and return the 1st element of the sorted array
        The thing that we should keep in mind that this solution is only capable when the is no repeating element in the array. */
    sort(arr, arr + n);
    return arr[1];
    /*  TC: O(log n)   //for sorting
        SC: O(1)       //as we are not taking any extra space   */
}

int approach2(int arr[], int n)
{   
    /*  We will initiate two variables 
        one for: minimum element of the array.
        second for: second minimum element of the array.    
    */

    int secondMinElement = INT_MAX;
    int minElement = INT_MAX;

    /*  The first loop is where we will find the most minimum element of the array   */
    for(int i=0; i<n; i++)
    {
        minElement = min(minElement, arr[i]);
    }

    /*  The second loop is where we will find the second most minimum element of the array   
        But there is a condition:
        That the second minimum element should not be equal to the minimum element of the array, and
        It should be the checked every cycle of the loop whether it the second minimum element is greater than arr[i] element, 
        if that so the the second minimum element is equal to the arr[i] element.    
    */
    for(int i=0; i<n; i++)
    {
        if (arr[i] < secondMinElement && arr[i] != minElement)
            secondMinElement = arr[i];
    }

    return secondMinElement;
}

int approach3(int arr[], int n)
{
    /*  We will initiate two variables
        one for: minimum element of the array.
        second for: second minimum element of the array.
    */
    int secondMinElement = INT_MAX;
    int minElement = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i] < minElement)
        {
            secondMinElement = minElement;
            minElement = arr[i];
        }
        else if(arr[i] < secondMinElement && arr[i] != minElement)
        {
            secondMinElement = arr[i];
        }
    }
    return secondMinElement;
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

    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    // print(arr, n);
    int ans1 = approach1(arr, n);
    // print(arr, n);
    int ans2 = approach2(arr1, n);
    // print(arr1, n);
    int ans3 = approach3(arr2, n);
    // print(arr2, n);

    cout << "The second minimum element: " << endl;
    cout << "According to Approach 1: " << ans1 << endl;
    cout << "According to Approach 2: " << ans2 << endl;
    cout << "According to Approach 2: " << ans3 << endl;
}