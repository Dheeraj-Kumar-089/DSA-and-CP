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
    ll a, b, n;
    cin >> a >> b >> n;

    ll sum = 0;
    vll tools(n);
    for (auto &x : tools)
    {
        cin >> x;
    }

    int j=0;
    for (int i = 0; i < n; i++)
    {
        
        if(tools[i] >= a){
            sum+=a-1;
        }
        else
        {
            sum += tools[i];
        }
    }

    sum += b;

    cout << sum << endl;
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