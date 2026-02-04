#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    cout<<count(all(s),'0')<<endl;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
    
}

int32_t main()
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