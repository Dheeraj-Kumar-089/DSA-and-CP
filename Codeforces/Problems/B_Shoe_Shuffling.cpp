#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    ll n;
    cin>>n;

    vll size(n);

    for(auto &x:size) cin>>x;

    map<ll,ll> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[size[i]]++;

    }
    bool isPossible = true;
    for (auto &pair:mp)
    {
        if(pair.second==1){
            isPossible=false;
        }
    }

    if(isPossible==false) {
        cout<<-1<<endl;
        return;
    }

    ll i=1;
    for (auto &pair:mp)
    {
        ll currentsize=pair.second-1;

        ll tempi=i;
        while (currentsize--)
        {
            
            cout<<i+1<<" ";
            i++;
        }
        cout<<tempi<<" ";
        i++;
        
        
    }
    cout<<endl;
    
    
}
    
    


int main(){
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