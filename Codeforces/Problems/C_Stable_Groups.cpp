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
    ll n,k,x;
    cin>>n>>k>>x;

    vll a(n);
    for(auto&x:a) cin>>x;
    
    sort(all(a));

    deque<ll> differencearray;
    for (ll i = 0; i < n-1; i++)
    {
        ll tempdifference = a[i+1]-a[i];

        if((tempdifference)>x){
            differencearray.push_back(tempdifference);
        }
    }

    sort(all(differencearray));


    while(k>0 and !differencearray.empty())
    {
        ll floorvalue = (differencearray[0]/x);

        if((floorvalue*x)==differencearray[0] and ((k-floorvalue+1)>=0)) {
            k-=(floorvalue-1);
            
            differencearray.pop_front();
        }
        else if((k-floorvalue)>=0){

        k-=floorvalue;
    
        differencearray.pop_front();
        }else{
            break;
        }
    }


    cout<<differencearray.size()+1<<endl;

    
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    
}