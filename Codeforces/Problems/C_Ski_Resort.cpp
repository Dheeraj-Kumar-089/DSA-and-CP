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
    ll n,k,q;
    cin>>n>>k>>q;

    vll a(n);
    for(auto &x:a) cin>>x;

    vll consecutive;


    bool flag = false;
    for (ll i = 0; i < n ; i++)
    {
        if(a[i]<=q){
            flag = true;
            break;
        }
    }

    if(flag==false) {
        cout<<0<<endl;
        return;
    }

    if(n==1){
        cout<<1<<endl;
        return;
    }

    ll count=0;

    for (ll i = 0; i < n; i++)
    {
        if(a[i]<=q){
            count++;
            if(i==n-1 and count!=0){
                consecutive.push_back(count);
            }
            
        }else{
            if(count==0){
                continue;
            }else{

            consecutive.push_back(count);
            count=0;
            }
        }
    }


    ll ans=0;


    for (ll i = 0; i < consecutive.size(); i++)
    {
        if((consecutive[i]-k+1)<=0) continue;

        ll sn = ((consecutive[i]-k+1)*(consecutive[i]-k+2))/2;
        ans+=sn;
        
    }

    cout<<ans<<endl;
    
    






    

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