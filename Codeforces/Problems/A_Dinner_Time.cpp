#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        if(p==1){
            if(m==n*q) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(p==n){
            if(m==q) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            int k=floor(n/p);
            int r = n%p;
            if(r==0){
                if(m==k*q) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }

    }
    
    return 0;
}