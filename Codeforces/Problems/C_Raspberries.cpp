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
    ll n,k;
    cin>>n>>k;

    vll a(n);
    for(auto &x:a) cin>>x;

    if(k==2){
        for (ll i = 0; i < n; i++)
        {
            if(a[i]%2==0){
                cout<<0<<endl;
                return;
            }
        }
        cout<<1<<endl;
        return;
        
    }  
    
    if (k == 3)
    {
        ll remainder=0;
    ll maximum = 0;


            for (ll i = 0; i < n; i++)
        {       
            

            if(a[i]%3==0){
                cout<<0<<endl;
                return;
            }

            remainder=a[i]%3;
            maximum=max(maximum,remainder);
           
        }


     if(maximum==1){
                cout<<2<<endl;
                return;
            }else{
                cout<<1<<endl;
                return;
            }
        }
    

    if (k == 4)
    {
        ll evencount=0;

        for (ll i = 0; i < n; i++)
        {
            if(a[i]%2==0){
                evencount++;
            }

            if(a[i]%4==0){
                cout<<0<<endl;
                return;
            }
        }

        if(evencount>=2){
            cout<<0<<endl;
            return;
        }
        else if(evencount==1){
            cout<<1<<endl;
            return;
        }else{

               for (ll i = 0; i < n; i++)
        {       
            ll remainder=a[i]%4;


            if(remainder==3){
                cout<<1<<endl;
                return;
            }
           
        }


            cout<<2<<endl;
            return;
        }
        
    }   


    if(k==5){

    ll remainder=0;
    ll maximum = 0;


            for (ll i = 0; i < n; i++)
        {       
            remainder=a[i]%5;
            maximum=max(maximum,remainder);

            if(a[i]%5==0){
                cout<<0<<endl;
                return;
            }
           
        }


     if(maximum==1){
                cout<<4<<endl;
                return;
            }else if(maximum==2){
                cout<<3<<endl;
                return;
            }else if(maximum==3){
                cout<<2<<endl;
                return;
            }else{
                cout<<1<<endl;
                return;
            }
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