#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a<b && a<c)
        {
            cout<<"ALICE"<<endl;
        }
        else if (b<a && b<c)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"CHARLIE"<<endl;
        }
        
        
        
    }
    
    
    return 0;
}