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

    vi unsorted(n);
    for(auto &x:unsorted) cin>>x;

    if(n==1) {
        cout<<0<<endl;
        return;
    }
    
    int totalDivisions=0;
    for (int i = n - 2; i >= 0; --i) {
        while (unsorted[i] >= unsorted[i + 1] && unsorted[i] > 0) {
            unsorted[i] /= 2;
            totalDivisions++;
        }
        if (unsorted[i] >= unsorted[i + 1]) {
            cout<<-1<<endl;
            return;
        }
    }

    cout<< totalDivisions<<endl;
    

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