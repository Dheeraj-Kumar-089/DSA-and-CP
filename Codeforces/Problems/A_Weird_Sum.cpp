#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<int>
#define vi vector<int>
#define pub push_back
#define pob pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fil(i,x,n) for (int i = x; i < n; i++)
#define fdl(i,x,n) for (int i = x; i >= n; i--)
#define nl endl

void solve(){
    int n,m;
    cin>>n>>m;

    vector<vll> a(n+1,vll(m+1));
    map<int,multiset<int>> rows;
    map<int,multiset<int>> columns;

    fil(i,1,n+1){
        fil(j,1,m+1){
            cin>>a[i][j];
            rows[a[i][j]].insert(i);
            columns[a[i][j]].insert(j);

        }
    }

    int rowsum=0;
    int columnsum= 0;

    
    for(auto & pair:rows){
        int k = pair.second.size();
        int i = 0;
        for(auto & x:pair.second){
            rowsum+=(2*i+1-k)*x;
            i++;
        }
    }


    for(auto & pair:columns){
        int k = pair.second.size();
        int i = 0;
        for(auto & x:pair.second){
            columnsum+=(2*i+1-k)*x;
            i++;
        }
    }

    cout<<rowsum+columnsum<<nl;



    
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