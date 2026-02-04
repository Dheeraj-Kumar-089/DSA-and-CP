#include <bits/stdc++.h>
using namespace std;

vector<long long int> gcd(long long int l,long long int r,long long int n,long long int g,vector<long long int>& result) {

long long int maximum = max(n,g);

long long int minimum = min(g,n);


if(g<l){
    result[0] = minimum; 
    result[1] = maximum;
    
    if(maximum%4==0) {return gcd(l,r,maximum+minimum,maximum,result); }
    else {return gcd(l,r,maximum+minimum,minimum,result);}
}

if(maximum<=r && maximum>=l && minimum<=r && minimum>=l) {  
    result[0] = minimum; 
    result[1] = maximum;
    
    if(maximum%4==0) {return gcd(l,r,maximum+minimum,maximum,result); }
    else {return gcd(l,r,maximum+minimum,minimum,result);}
   
}
else {return result;}
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int l,r,g;
        cin >> l >> r >> g;
        vector<long long int> result(2,-1);
        vector<long long int> ans(2);
        long long int a = g;
        ans = gcd(l,r,g,g,result);
        if(ans[0]>=l && ans[1]<=r) {cout<<ans[0]<<" "<<ans[1]<<endl; }
        else {cout<<"-1"<<" "<<"-1"<<endl;}
         

    }
    return 0;
}
