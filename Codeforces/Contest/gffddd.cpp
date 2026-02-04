#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
   ll n,target;cin>>n>>target;
   ll arr[n];
   for(ll i=0;i<n;i++)cin>>arr[i];
   sort(arr,arr+n);
    ll mn= arr[0]+arr[1]+arr[2];
  for(ll i=1;i<n-1;i++){
    ll left=0;
    ll right=n-1; 
    while(left<right){
        ll sum=arr[right]+arr[left]+arr[i];
        if(abs(mn-target)>abs(target-sum)){
            mn=sum;
        }
        else if(sum<target){
              left++;
        }
        else right--;
         if(left==i||right==i)break;
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
