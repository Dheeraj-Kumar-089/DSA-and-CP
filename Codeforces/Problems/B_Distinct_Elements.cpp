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

    vll b(n);
    for (auto &x : b)
        cin >> x;

    
   
    vll ans(n);
    ll element=n;

    for (ll i = 0; i < n; i++)
    {
     
        
        if ((i>0?(b[i]-b[i-1]):b[i]) == (i+1))
        {
            ans[i]=element;
            element--;
        }
        else
        {
            ll difference = i-((i>0)?(b[i]-b[i-1]):b[i]);
            ans[i] = ans[difference];
            
        }

    }

    for (auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    

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