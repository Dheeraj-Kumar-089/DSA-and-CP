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


    int a,b;
    cin>>a>>b;


    int setbitina;
    int setbitinb;


    for (int i = 0; i < 32; i++)
    {
        if((a&(1<<i))) setbitina=(i+1);
        if((b&(1<<i))) setbitinb=(i+1);

    }

    

    if(setbitinb>setbitina){
        cout<<-1<<endl;
        return;
    }

    if(a==b){
        cout<<0<<endl;
        return;
    }

    int ans = a^b;
    if(ans<=a){
        cout<<1<<endl;
        cout<<ans<<endl;
        return;
    }

    cout << 2 << endl;
    int c = (a | b);      
    int x1 = a ^ c;      
    int x2 = c ^ b;       
    cout << x1 << " " << x2 << endl;


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