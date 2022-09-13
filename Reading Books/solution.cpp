// Geeks for Geeks
/*
Geek is at a book fair. There are total N kinds of books.
 He has to choose a book of a particular kind and read it 
 loudly as many times as he can in the given time and earn 
 points. Geek knows that reading a book of kind i once needs 
 Ai minutes and it will give him Bi points. 
 Geek has K minutes for reading books. During this time, 
 he can only read a book of a particular kind as many times 
 as he can so as to maximize his points. But he can not 
 pick books of different kinds, he has to read the same book 
 again and again. Find the maximum points Geek can get.
 */

/*
Input:
N = 3, K = 10
A = {3, 4, 5}
B = {4, 4, 5}
Output: 12
Explanation:
If Geek picks book of first kind he can
read it 3 times, he will get 3*4 = 12 points.
If Geek picks book of second kind he can
read it 2 times, he will 2*4 = 8 points.
If Geek picks book of third kind he can
read it 2 times, he will get 2*5 = 10 points.
So the maximum possible points which he
can earn in those 10 minutes is 12.
*/
#include<bits/stdc++.h>
using namespace std; 

long long approach1(int N, int K, long long A[], long long B[])
{
    long long int ans = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        long long int times = K / A[i];
        long long int score = B[i] * times;
        ans = max(ans, score);
    }
    return ans;
}

int main()
{
    int N;
    cin >> N;

    int K;
    cin >> K;
    long long int A[N];
    long long int B[N];

    for(int i=0; i<N; i++)
    {
        cin >> A[i]; 
    }

    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    long long int ans1 = approach1(N, K, A, B);
    cout << ans1;
}