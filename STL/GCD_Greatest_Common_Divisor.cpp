#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int gcd_value=v[0];
    for (int i = 0; i < n-1; i++)
    {
        gcd_value = gcd(gcd_value,v[i+1]);
    }
    cout<<gcd_value;
    
    
    return 0;
}