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

    vi efficiency(n-1);

    int sum=0;

    for(auto &x : efficiency) {
        cin >> x;
        sum+=x;
    }

    if(sum>0) cout<<-1*sum<<endl;
    else cout<<-1*sum<<endl;


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