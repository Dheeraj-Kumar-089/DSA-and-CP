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

    ll totallength = s.size();

    ll count0=0;
    ll count1=0;

    for (ll i = 0; i < totallength; i++)
    {
        if(s[i]=='0') count0++;
        else count1++;
    }
    
    if(count0==count1){

    for (ll i = 2; i <= 100; i+=4)
    {
        if(totallength==i){
            cout<<"DA"<<endl;
            return;
        }
    }
    cout<<"NET"<<endl;
    return;
}



    if(count0>count1){


        for (ll i = 1; i <= count1; i+=2)
    {
        if(count1==i){
            cout<<"DA"<<endl;
            return;
        }
    }
    cout<<"NET"<<endl;
    return;

    }

    if(count1>count0){

        for (ll i = 1; i <= count0; i+=2)
    {
        if(count0==i){
            cout<<"DA"<<endl;
            return;
        }
    }
    cout<<"NET"<<endl;
    return;

    }

    
    

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