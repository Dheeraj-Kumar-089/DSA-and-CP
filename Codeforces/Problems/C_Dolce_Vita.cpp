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
    ll n, x;
    cin >> n >> x;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    ll sum = accumulate(all(a), 0LL);

    ll pack = n;

    sort(all(a));

    ll count = 0;
    ll ans = 0;

    
    while (pack > 0)
    {
        if (sum <= x)
        {
            ll difference = x-sum;

            ll temp = difference/pack;
            temp++;
            count+=temp;
            
            ans += temp*pack;
            sum = sum + (temp*pack);
        }
        else
        {
            while ((sum > x) and pack>0)
            {
                pack--;
                sum = sum - (count + a[pack]);
               
            }
        }

        
    }

    cout<<ans<<endl;
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