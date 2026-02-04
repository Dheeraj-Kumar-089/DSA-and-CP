#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{

    char matrix[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int minr = 0;
    int maxr = 9;
    int minc = 0;
    int maxc = 9;
    int count = 0;

    int temp=0;

    while (temp<5)
    {
        temp++;

        for (int j = minr; j <= maxc; j++)
        {
            if(matrix[minr][j]=='X') count+=temp;
        }
        minr++;

        for (int i = minr; i <= maxr; i++)
        {
            if(matrix[i][maxc]=='X') count+=temp;

        }
        maxc--;

        for (int j = maxc; j >= minc; j--)
        {
             if(matrix[maxr][j]=='X') count+=temp;

        }
        maxr--;

        for (int i = maxr; i >= minr; i--)
        {
            if(matrix[i][minc]=='X') count+=temp;

        }
        minc++;
        
    }

    cout<<count<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}