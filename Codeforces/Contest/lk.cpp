#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
   ll n,target;cin>>n>>target;
   ll arr[n];
       ll sum=0;
       ll mn=INT_MAX;
   for(ll i=0;i<n;i++)cin>>arr[i];
   sort(arr,arr+n);
  for(ll i=1;i<n-1;i++){
    ll left=0;
    ll right=n-1;
    while(i>left&&n>right>i){
        sum=arr[left]+arr[right]+arr[i];
        if(sum==target){
            left++;right--;
        }
        else if(sum<target){
                left++;
        }
        else right--;
        
        mn=min(mn,sum);
    }
  }
        cout<<abs(mn-target)<<nl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;cin>>t;
    while(t--){
        solve();
    }
return 0;
}