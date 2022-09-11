#include<iostream>
using namespace std;

/*int stockMarket(int ste[], int n)
{
    if(n == 0)
    {
        return 0;
    }

    int ans[n];
    for(int i=0; i<(n-1); i++)
    {
        if(ste[i] > ste[i+1] && ste[i] != (n-1))
        {
            ans[i] = 1;
        }
        else
        {
            ans[i] = 0;
        }
    }
    return ans;
}*/

int main()
{
    int n;
    cin >> n;

    int ste[n];
    for(int i=0; i<n; i++)
    {
        cin >> ste[i];
    }

    int ans[n] = {0};

    for (int i = 0; i < (n - 1); i++)
    {   
        int count = 0;
        for(int j=i+1; j<n; j++)
        {
            if(ste[i] < ste[j])
            {
                count++;
                ans[i] = count;
                break;
            }
            else if(ste[i] > ste[i+1])
            {
                count++;
            }
        
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << ans[i] << " ";
    }
}






