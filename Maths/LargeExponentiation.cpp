#include<bits/stdc++.h>
using namespace std;
int M =1e9+7;
int binExp(int a,long long b,int m){
    long long int ans = 1;
    
    //if a<10^9, b<10^9, M<10^9
    while(b)
    {      
        if(b&1){
            ans = (ans*a)%m;
            //ans = (ans*1LL*a)%M;
        }
        a = (a*a)%m;
        //a = (a*1LL*a)%M;
        b>>=1;     
    }
    return ans;
}
int main(){
    int a = 2, b = 13,c = 19;
    cout<<binExp(a,binExp(b,c,M-1),M)<<endl;
    
}