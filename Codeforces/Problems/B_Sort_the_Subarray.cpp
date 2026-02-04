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

    vll a(n);
    for(auto&x:a) cin>>x;
    
    vll b(n);
    for(auto&x:b) cin>>x;
    
    ll ans = 0;
    ll count = 0;
    vector<pair<ll,ll>> index;
    for (ll i = 1; i < n; i++)
    {

        if(b[i]>=b[i-1]){
            if(count == 0) index.push_back({i-1,i});
            else index.back().second = i;
            count++;
        }else{ 
            
            count = 0;
        }
        
    }

    ll startingindex = 0;
    ll endingindex = 0;
    for(ll i = 0;i<index.size();i++){
        ll size = index[i].second-index[i].first;

        bool isalreadySorted = true;
        for (ll j = index[i].first; j < index[i].second+1; j++)
        {
            if(a[j]!=b[j]) isalreadySorted=false;
        }
        if(isalreadySorted==true) continue;
        sort(a.begin()+index[i].first,a.begin()+index[i].second+1);
        for (ll j = index[i].first; j < index[i].second+1; j++)
        {
            if(a[j]!=b[j]) continue;
        }
        
        if(ans<=size){
            ans = size;
            startingindex=index[i].first;
            endingindex = index[i].second;
        }

    }

    cout<<startingindex+1<<" "<<endingindex+1<<endl;


    
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