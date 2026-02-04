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
    
    ll count=0;

    if(n==1){
        cout<<0<<endl;
        return;
    }

    ll factorsof2=0;
    ll factorsof3=0;
    ll temp = n;
    while (temp>1)
    {
        if(temp%2==0){
            factorsof2++;
            temp/=2;

        }else if(temp%3==0){
            factorsof3++;
            temp/=3;
        }else{
            cout<<-1<<endl;
            return;
        }
    }

    if(factorsof2>factorsof3){
        cout<<-1<<endl;
        return;
    }
    
    while(n>1){
            if(n%6==0){
                n/=6;
                count++;
            }else{
                n*=2;
                count++;
            }
        }


    cout<<count<<endl;

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