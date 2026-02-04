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
    ll n, m;
    cin >> n >> m;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    map<ll, ll> freq;

    for (ll i = 0; i < n; i++)
    {
        freq[(a[i] % m)]++;
    }
    ll ans = 0;

    for (ll i = 1; i <= m / 2; i++)
    {
        ll target = m - i;

        if (freq.find(i) != freq.end())
        {
            if (freq.find(target) != freq.end())
            {

                if (freq[i] > freq[target])
                {
                    freq[i] = (freq[i] - freq[target] - 1);
                    freq[target] = 0;
                }
                else if (freq[i] < freq[target])
                {
                    freq[target] = (freq[target] - freq[i] - 1);
                    freq[i] = 0;
                }
                else
                {
                    if (target == i)
                    {
                        freq[i] = 0;
                    }
                    else
                    {
                        freq[target] = 0;
                        freq[i] = 0;
                    }
                }
                ans++;
            }
        }
    }

    if(freq.find(0)!=freq.end()) {
        ans++;
        freq[0]=0;
    }


    for (auto &pair : freq)
    {
        if (pair.second > 0)
        {

            ans += pair.second;
        }
    }

    cout << ans << endl;
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