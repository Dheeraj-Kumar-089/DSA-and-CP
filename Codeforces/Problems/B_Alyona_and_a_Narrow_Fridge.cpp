#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n,k;
    cin>>n>>k;

    vll a(n);
    for(auto&x:a) cin>>x;
    
    

    int low = 0;
    int high = n-1;
    int ans = 0;

    while (low<=high)
    {
        int mid = (low + high)>>1;
        vll temp;

        for (int i = 0; i <= mid; i++)
        {
            temp.push_back(a[i]);
        }
        
        sort(all(temp));

        int height = 0;

        for (int i = mid; i >=0 ; i-=2)
        {
            height+=temp[i];
        }


        if(height>k){
            high = mid-1;
        }
        else{
            ans = mid;
           low = mid + 1;
        }

        
    }

    cout<<ans+1<<endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}