#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
 
void solve(){
    ll x,k;
    cin>>x>>k;
    string s,t;
    s = to_string(x);
    t = to_string(x);

    for (int i = 1; i < k; i++)
    {
        s.append(t);
    }
    ll p;
    p = stoll(s);
    
    
    


    double counter = 0;
    for (ll i = 1; i * i <= p; i++)
    {
        if(p%i==0){
            counter++;
            if((p/i) != i)
            {
                counter++;
            }
        }
    }
    if(counter==2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;



    

    
    

}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}