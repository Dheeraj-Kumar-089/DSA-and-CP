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


    vll v(n);
    for(auto&x:v) cin>>x;


    ll start = 0;
    ll end = n-1;
    ll min = 1;
    ll max = n;

    while (start<end)
    {
        if((v[start]==min and v[end]==max) or (v[start]==max and v[end]==min)){
            start++;
            end--;
            min++;
            max--;
        }else if(v[end]==max){
        end--;max--;
     }
     else if(v[end]==min){
        end--;min++;
     }
     else if(v[start]==max){
        start++;max--;
     }
     else if(v[start]==min){
        start++;min++;
     }
     else
     {
         cout<<start+1<<" "<<end+1<<endl;
        return;
     } 
    }
    
    cout<<-1<<endl;
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