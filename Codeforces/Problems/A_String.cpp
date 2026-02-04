#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char str = s[i];

            if(str==*"1"){
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}