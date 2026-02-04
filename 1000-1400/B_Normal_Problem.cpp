#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string observe;
        cin>>observe;
        for (int i = observe.size()-1 ; i >= 0; i--)
        {
            if(observe[i]=='p') cout<<'q';
            else if(observe[i]=='q') cout<<'p';
            else cout<<'w';
        }
        cout<<endl;
    }
    
    return 0;
}