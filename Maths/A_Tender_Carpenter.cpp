#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int count = 0;
        for (int i = 0; i < n-1; i++)
        {
            int minimum = min(a[i],a[i+1]);
            int maximum = max(a[i],a[i+1]);
            if(minimum*2>maximum){
                cout<<"YES"<<endl;
                break;
            }
            else count++;
        }
        if(count==n-1){
            cout<<"NO"<<endl;
        }

        
    }
    return 0;
}