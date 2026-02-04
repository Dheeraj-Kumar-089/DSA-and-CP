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
    ll n;
    cin >> n;
    
    char color;
    cin >> color;
    string s;
    cin >> s;
    s += s;
    n *= 2;

    long long lastgreenindex = -1;
    long long maxseconds = INT_MIN;

    for (int i = n - 1; i >= 0; i--) 
    {
        if (s[i] == 'g')
            lastgreenindex = i;
        if (s[i] == color)
        {
            long long difference = lastgreenindex - i;
            maxseconds = max(maxseconds, difference);
        }
    }
    cout << maxseconds << endl;
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