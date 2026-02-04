#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int sumuptoX(int x){
    return (x*(x+1))/2;
}

void solve()
{
    int k, x;
    cin >> k >> x;

    int low = 1;
    int high = 2*k-1;

    while (low<=high)
    {
        int mid = low + (high-low)/2;
        int sum=0;
        if(mid>=k){
            sum=sumuptoX(k) + sumuptoX(k-1) - sumuptoX(2*k-1-mid);
        }else{
            sum = sumuptoX(mid);
        }

        if(sum>x){
            high=mid-1;
        }else if(sum==x){
            cout<<mid<<endl;
            return;
        }else{
            low=mid+1;
        }
    }
    if(high==(2*k-1)){
        cout<<high<<endl;
        return;
    }

    cout<<low<<endl;

    
    
        
    
  
}

int32_t main()
{
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