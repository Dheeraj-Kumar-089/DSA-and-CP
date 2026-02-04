#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int target = 0;
        for (int i = 0; i < n; i++)
        {
            target += a[i];
        }
        
        unordered_map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            int first = a[i];
            
            if(second<= target-x-first ){
                m[second]++;
            }
        }
       
        
    }
    
    return 0;
}