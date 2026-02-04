#include<bits/stdc++.h>
using namespace std;
int binExpRecur(int a,int b){
    if(b==0) return 1;
    int result = binExpRecur(a,b/2);
    if(b&1) return a*result*result;
    //return (a*((result*1LL*result)%M))%M; if we want to print modulo only
    else return result*result;
    // return (result*1LL*result)%M; if we have to print modulo only
}
int main(){
    int a = 2, b=13;
    int ans = 1;

    return 0;
}