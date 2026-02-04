#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<long long int,long long int> &a ,const pair<long long int,long long int> &b){
    return (((a.first*a.first) + (a.second*a.second))<((b.first*b.first) + (b.second*b.second)));
}
int main(){
    long long int n;
    cin>>n;
    vector<pair<long long int,long long int>> p(n);
    for (long long int i = 0; i < n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    

    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = i+1; j < n; ++j)
    //     {
    //         if(should_i_swap(p[i],p[j])) swap(p[i],p[j]);
    //     }
        
    
    sort(p.begin(),p.end(),cmp);
   
    for (int i = 0; i < n; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }        
    return 0;
}