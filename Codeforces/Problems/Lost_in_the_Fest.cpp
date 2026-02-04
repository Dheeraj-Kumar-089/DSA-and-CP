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
    int n;
    cin>>n;

    vi heights(n);
    for(auto &x:heights) cin>>x;

    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if(heights[i]>=heights[n-1]) {
            idx = i;
        break;
        }
    }

    cout<<n-idx-1<<endl;
    

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