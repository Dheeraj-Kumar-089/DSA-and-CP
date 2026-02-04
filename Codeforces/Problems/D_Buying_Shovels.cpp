#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<long long>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

vector<int> getFactors(int n) {
    vector<int> factors;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);         
            if (i != n / i)               
                factors.push_back(n / i); 
        }
    }

    sort(rall(factors)); 
    return factors;
}

void solve(){
    int n,k;
    cin>>n>>k;

    if(k>=n){
        cout<<1<<endl;
        return;
    }

    vll factors = getFactors(n);

    for (int i = 0; i < factors.size(); i++)
    {
        if(factors[i]<=k){
            cout<<n/factors[i]<<endl;
            return;
        }
    }
    

    
    
}

int32_t main(){
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