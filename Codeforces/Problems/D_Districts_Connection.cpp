#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
// #define push push_back
//  #define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    ll n;
    cin >> n;

    vll a(n);
    for (auto &x : a)
        cin >> x;


    unordered_map<ll,ll> freq;
    unordered_map<ll,ll> index;



    for (ll i = 0; i < n; i++)
    {
        freq[a[i]]++;
        index[a[i]]=i+1;
    }

    ll frequency=0;
    ll otherdistrict=0;

    if(freq.size()==1){
        cout<<"NO"<<endl;
        return;
    }


    for (auto &pair:freq)
    {
        if(pair.first!=a[0]){
            otherdistrict=pair.first;
            break;
        }
    }
    
    ll start = a[0];

    cout<<"YES"<<endl;
    for (ll i = 1; i < n; i++)
    {
        if(a[i]!=a[0]) cout<<1<<" "<<i+1<<endl;
    }


    for (ll i = 1; i < n; i++)
    {
        if(a[i]==start){
            cout<<i+1<<" "<<index[otherdistrict]<<endl;
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