#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

ll factorial(ll n){
    ll fact=1;
    for (ll i = 1; i <= n; i++)
    {
        fact=(fact*i)%MOD;
    }
    return fact;
    
}

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();

    ll count = 0;
    ll multiple = 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            continue;
        }
        else
        {
            ll count2 = 1;
            while (s[i] == s[i - 1] and i<n)
            {
                count++;
                count2++;
                i++;
            }
            multiple=(multiple*count2)%MOD;
           
        }
    }

    cout<<count<<" "<<(factorial(count)*multiple)%MOD<<endl;

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