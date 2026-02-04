#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> p;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        p.push_back({x,y});
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i].first>p[i].second)
        {
            cout<<p[i].second<<endl;
        }
        else
        {
            cout<<p[i].first<<endl;
        }
        
        
    }
    return 0;
}