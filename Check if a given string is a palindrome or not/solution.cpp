#include<bits/stdc++.h>
using namespace std;

bool approach1(string word)
{
    int n = word.length();
    int start = 0;
    int end = n - 1;

    bool check = false;
    while (start < end)
    {   
        if(word[start] == word[end]){
            check = true;
        }
        else
        {
            check = false;
        }
        start++;
        end--;
    }
    cout << check << endl;

    return check;
}

int main()
{
    string word;
    cout << "Enter a word which is going to be checked is palindrome or not: ";
    cin >> word;

    bool ans = approach1(word);
    cout << ans;

}