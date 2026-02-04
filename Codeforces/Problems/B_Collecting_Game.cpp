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

bool flag(vector<ll> &a,ll i,vector<pair<ll,bool>> &hashmap){
    if(i==0 && a.size()==1){
        return false;
    }else if(i==0){
        if(a[i]>=a[i+1]) return true;
        else return false;
    }else if(i==(a.size()-1)){
        return false;
    }else{
        if((hashmap[i-1].first+a[i])>=a[i+1]) return true;
        else return false;
    }

}

void solve(){
    ll n;
    cin>>n;

    vll a(n);
    for(auto &x:a) cin>>x;

    multimap<ll,ll> temp;
    for (ll i = 0; i < n; i++)
    {
        temp.insert({a[i],i});
    }
    sort(a.begin(),a.end());
    vector<pair<ll,bool>> hashmap(n,{0,false});

    for (ll i = 0; i < n; i++)
    {
        if(i==0) hashmap[i].first = a[i];
        else hashmap[i].first = (hashmap[i-1].first + a[i]);

        hashmap[i].second = flag(a,i,hashmap);

    }
    


    vll yescount(n);
    ll count = 0;

    for (ll i = n-1; i >= 0; i--)
    {
        if(hashmap[i].second==true) count++;
        else {
            count = 0;
        }

        yescount[i]=count;
    }

    vll ans(n);
    ll i = 0;
    for (auto &pair:temp)
    {

        ll index = pair.second;
        ans[index] = i + yescount[i];
        i++;

    }
    
    for (ll i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
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