#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    multiset<int> s;
    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin>>ai;
        s.insert(ai);
        s1.insert(ai);

    }
    
    
    int count=s1.count(*s1.begin());
    for (auto it=s1.begin(); it!=s1.end(); ++it)
    {
        if(s.count(*it)>count) count=s.count(*it); 
    }
    
    cout<<count<<endl;
    
    return 0;
}