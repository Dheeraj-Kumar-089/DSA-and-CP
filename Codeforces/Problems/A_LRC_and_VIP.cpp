#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        bool check=false;
        for (int i = 0; i < n-1; i++)
        {
            if(v[i]!=v[i+1]) {                
                check=true;
                break;
            }
        }

        vector<int> temp=v;
        sort(temp.begin(),temp.end());

        int max=temp[n-1];

        if (check==false) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for (int i = 0; i < n; i++)
            {
                if(max==v[i]) cout<<2<<" ";
                else cout<<1<<" ";
            }
            
            cout<<endl;
            
        }
        

    }
    return 0;
}