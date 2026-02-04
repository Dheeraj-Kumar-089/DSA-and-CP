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
    ll n;
    cin>>n;

    string s;
    cin>>s;

    ll count=0;
    ll ans = 0;
    ll i=0;
    ll num=s.size();

    while(i<num)
    {
        if(s[i]=='('){
            count++;
            i++;

        }else{
            count--;

            if(count<0){
                
                s.erase(i,1);
                s.push_back(')');
                ans++;
                count=0;
            }else{
                i++;
            }
        }
    }

    // optimal solution

    // for (ll i = 0; i < s.size(); i++) {
    //     if (s[i] == '(') {
    //         count++;
    //     } else {
    //         if (count > 0) {
    //             count--;
    //         } else {
    //             ans++;
    //         }
    //     }
    // }
    cout<<ans<<endl;
    

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


