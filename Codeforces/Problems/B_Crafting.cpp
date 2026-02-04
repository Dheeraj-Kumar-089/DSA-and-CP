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
        long long int n;
        cin>>n;

        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        vector<long long int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }

        long long int sum1 = accumulate(v.begin(),v.end(),0);
        long long int sum2 = accumulate(b.begin(),b.end(),0);
        if(sum1==0 && sum2==0){
            cout<<"YES"<<endl;
        }
        else if(sum1-sum2>1){
                cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    
    return 0;
}