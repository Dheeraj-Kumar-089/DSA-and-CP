#include<bits/stdc++.h>
using namespace std;
int main(){
    float n,m;
    cin>>n>>m;
    if(m>n) cout<<"NEWBIE";
    else if (m>=n/2) cout<<"NEWBIE";
    else cout<<"PRO";
    
    return 0;
}