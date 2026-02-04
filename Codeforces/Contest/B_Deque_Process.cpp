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

    vll p(n);
    for(auto&x:p) cin>>x;
    
    ll low = 0;
    ll high = n-1;
    string ans;

    while (low<=high)
    {
        if(p[low]>p[high]){
            ans+='L';
            low++;
        }else{
            ans+='R';
            high--;
        }

        if(p[low]<p[high]){
            ans+='L';
            low++;
        }else{
            ans+='R';
            high--;
        }


        if(low==high){
            ans+='R';
            low++;
        }



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