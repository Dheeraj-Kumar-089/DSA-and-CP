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
    ll n,c;
    cin>>n>>c;

    vll a(n);
    for(auto&x:a) cin>>x;

    sort(all(a));
    ll count = 0;
    
    while(a.size()!=0)
    {
        ll index = upper_bound(all(a),c)-a.begin();
        index--;
        if (index < 0) {
            
            count+=a.size();
            break;
        }
        
        if(a[index]>c) count++;
        for (ll i = 0; i < a.size(); i++)
        {
            a[i]=a[i]<<1;
        }
        
        
        a.erase(a.begin()+index);
    }
    

    cout<<count<<endl;
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