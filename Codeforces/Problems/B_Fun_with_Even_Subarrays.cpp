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

    vll a(n);
    for (auto &x : a)
    {

        cin >> x;

    }
    ll ans = 0;
    ll i = n-2;
    while(i>=0 and a[i]==a[n-1]){
        i--;
    }

    if(i==-1){
        cout<<0<<endl;
        return;
    }

    while (i>=0)
    {
        ll equal = n-i-1;
        i-=equal;
        ans++;
        while (i>=0 and a[i]==a[n-1])
        {
            i--;
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