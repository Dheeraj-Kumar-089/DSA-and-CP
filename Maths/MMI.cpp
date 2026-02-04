#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int binexp(int a, int b, int m){
    int res = 1;
    while(b>0){
        if(b&1){
            res = (res*1LL*a)%m;
        }
        a = (a*1LL*a)%m;
        b>>=1;
    }
    return res;
}
int main(){
    int a;
    cout<<binexp(2,M-2,M); 
    return 0;
} 
//A^-1= A^(M-2) mod M