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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    if (s < (b * k) or s > (b * k + (n * (k - 1))))
    {
        cout << -1 << endl;
        return;
    }
    else
    {

        if (s >= b * k and s <= (b * k + (k - 1)))
        {
            cout << b * k << " ";
            s -= b * k;
        }
        else
        {
            cout << b * k + (k - 1) << " ";
            s -= (b * k + (k - 1));
        }

        for (ll i = 1; i < n; i++)
        {
            if (s >= (k - 1))
            {
                cout << k - 1 << " ";
                s -= k - 1;
            }
            else
            {
                if(i==n-1){
                    cout << s << endl;
                }else{
                    cout<<s<<" ";
                    s = 0;
                }
                
                
            }
        }
    }
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