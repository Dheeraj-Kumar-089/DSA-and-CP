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
        int n,x;
        cin>>n>>x;

        if(n==1){
            if(x==0) cout<<-1<<endl;
            else cout<<x<<endl;
            continue;
        }

        int sb = __builtin_popcount(x);

        if(n<=sb){
            
         cout<<x<<endl;
         continue;
        }
        if(n>sb){
            if((n-sb)%2==0) cout<<x+(n-sb)<<endl;
            else{
                if(x==0 || x==1){
                    cout<<x+(n-sb)+3<<endl;
                }
                else cout<<x+(n-sb)+1<<endl;
            }
        }


    }

    return 0; 

   
}
