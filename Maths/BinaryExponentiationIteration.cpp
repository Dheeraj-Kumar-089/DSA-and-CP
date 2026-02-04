#include<bits/stdc++.h>
using namespace std;
long long int binExpIte(int a,int b){
    long long int ans = 1;
    //int M =1e9+7;
    //if a<10^9, b<10^9, M<10^9
    while(b)
    {      
        if(b&1){
            ans = ans*a;
            //ans = (ans*1LL*a)%M;
        }
        a = a*a;
        //a = (a*1LL*a)%M;
        b>>=1;     
    }
    return ans;
}
int main(){
    int a = 2, b = 13;
    cout<<binExpIte(a,b)<<endl;
    
}

