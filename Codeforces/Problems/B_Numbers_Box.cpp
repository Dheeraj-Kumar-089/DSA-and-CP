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
    ll n,m;
    cin>>n>>m;
    ll negativeCount=0;
    ll minimum = INT_MAX;
    ll totalSum=0;


    vector<vector<ll>> rectangle(n,vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {   
            

            cin>>rectangle[i][j];

            if(rectangle[i][j]<0){
                negativeCount++;
                
            }
            minimum=min(minimum,abs(rectangle[i][j]));
            
            totalSum+=abs(rectangle[i][j]);
            

        }
        
    }
    
(negativeCount&1)==0?cout<<totalSum<<endl:cout<<(totalSum-2*minimum)<<endl;

    

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