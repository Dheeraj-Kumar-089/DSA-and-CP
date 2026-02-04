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

    vll c(n);
    for (auto &x : c)
        cin >> x;

    sort(all(c));

    if (n == 1 and c[0] == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (c[0] != 1)
    {
        cout << "NO" << endl;
        return;
    }

    vll prefixsum(n);
    prefixsum[0] = c[0];


    for (ll i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + c[i];
    }

    for (ll i = 1; i < n; i++)
    {
        if(c[i]>prefixsum[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }


    cout << "YES" << endl;
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