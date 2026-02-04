#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;

    cin>>t;
    while (t--)
    {
        long long int x,y;
        cin>>x>>y;
        long long int difference = abs(x-y);
        if(difference==1){
            cout<<"Yes"<<endl;
        }
        else if((difference+1)%9==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}