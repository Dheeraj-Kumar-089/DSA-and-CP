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
        int n,k;
        cin>>n>>k;

        vector<int> v(n);
        for(auto &i : v) cin>>i;
        sort(v.begin(),v.end());

        int ans = 0;
        set<int> s;
        for(int i = 0; i < n; i++){
            if(abs(i-(n-i-1))<=(k+1))
            {
                s.insert(v[i]);
            }
        }

        cout<<*s.rbegin()-*s.begin()+1<<endl;
        


    }

    return 0; 

   
}
