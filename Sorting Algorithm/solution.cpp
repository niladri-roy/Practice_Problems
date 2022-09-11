#include<iostream>
using namespace std;

void print(int arrayToPrint[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arrayToPrint[i] << " ";
    }
    cout << endl;
}


void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int mini = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            mini = min(mini, arr[j]);
        }
        swap(arr[i], mini);
    }
    print(arr, n);
}


void Bubble_Sort(int arr[], int n) 
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    print(arr, n);
}
int main()
{
    int n;
    cout << "Enter the numbers of element of the vector: ";
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

    int arr4[n];
    for (int i = 0; i < n; i++)
    {
        arr4[i] = arr1[i];
    }

    cout << "The sorted form of the given: " << endl;

    cout << "According to Selection Sort: ";
    Selection_Sort(arr1, n);
    
    cout << "According to Bubble Sort: ";
    Bubble_Sort(arr2, n);
}