#include<bits/stdc++.h>
#define ll long long

using namespace std;

const ll M = 1e18+7;
int binMultiply(ll int a,ll int b){
    int ans = 0;   
    //if a<10^18, b<10^9, M<10^18
    while(b)
    {      
        if(b&1){
            ans = (ans+a)%M;         
        }
        a = (a+a)%M;

        b>>=1;     
    }
    return ans;
}
int binExpIte(ll a,ll b){
    int ans = 1;
    
    //if a<10^18, b<10^9, M<10^18
    while(b)
    {      
        if(b&1){
            ans = binMultiply(ans,a);           
        }
        a = binMultiply(a,a);

        b>>=1;     
    }
    return ans;
}

int main(){
    ll a = 2, b = 13;
    cout<<binExpIte(a,b)<<endl;
    
}