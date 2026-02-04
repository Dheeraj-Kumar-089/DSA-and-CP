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
    string s;
    cin>>s;
    ll n = s.size();

    unordered_map<char,ll> freq;

    for (ll i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
    }

    if(freq['0']==freq['1']){
        cout<<0<<endl;
        return;
    }

    ll i = 0;
    while (freq['0']>0 or freq['1']>0)
    {
        if(s[i]=='1') {
            freq['0']--;
            if(freq['0']<0){
                break;
            }
        }
        if(s[i]=='0') {
            freq['1']--;
            if(freq['1']<0){
                break;
            }
        }


        i++;
        
    }

    cout<<n-(i)<<endl;
    
        
    
    
    



    
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
