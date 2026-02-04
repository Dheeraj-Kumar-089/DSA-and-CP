#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin>>a[i];
        }

        
        unordered_set<int> _k;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin>>x;
            _k.insert(x);
        }
        int count=0;
        if(k<n-1){
            for (int i = 0; i < m; i++)
            {
                cout<<"0";
            }
            cout<<endl;
        }
        else if(k>=n){
            for (int i = 0; i < m; i++)
            {
                cout<<"1";
            }
            cout<<endl;
            
        }
        else{
            for (int i = 1; i <= n; i++)
            {
                
                if(_k.find(i)==_k.end()){
                    count = i;   
                }
            }
            bool countidx = true;
            int counti = 0;
            for (int i = 0; i <= n; i++)
            {
                countidx = true;
                if(a[i]==count){
                    counti = i;
                    break; 
                      
                }
                countidx=false;
            }

            

            for (int i = 0; i < m; i++)
            {
                if(countidx == true && counti == i){
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                
            }

            cout<<endl;

            
        }
        
    }
    
    return 0;
}