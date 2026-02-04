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
    vll array(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>array[i];
        if(array[i]==1) array[i]+=1;
    }
    
    ll i=0;
    while(i<n-1)
    {

        if(array[i+1]%array[i]!=0){
            i++;
        }else{
            array[i+1]++;
        }
    }

    for(auto &x:array) cout<<x<<" ";
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