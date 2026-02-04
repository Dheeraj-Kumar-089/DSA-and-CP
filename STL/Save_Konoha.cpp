#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,z;
        cin>>n>>z;
        multiset<int> power;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            power.insert(x);
        }
        auto it=--power.end();
        int count=0;
        while (z>0)
        {
            if(power.empty()) break;
            int largestEelement = *power.rbegin();
            power.erase(it);
            int reducedValue=largestEelement/2;
            if(reducedValue!=0){power.insert(reducedValue);
            }
            z=z-largestEelement;
            count++;
        }


        if (z>0) cout<<"Evacuate"<<endl;
        else cout<<count<<endl;

    }
    
    return 0;
}