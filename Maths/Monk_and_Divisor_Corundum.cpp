#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
vector<int> hsh(N,0); 
vector<int> multiplecount(N,0); // count the multiples of each number in array


int main(){

    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        hsh[x]++;
    }

    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j < N; j+=i)
        {
            multiplecount[i] += hsh[j];
        }
        
    }
    int t;
    cin>>t;
    while (t--)
    {
        int p,q;
        cin>>p>>q;
        long long lcm = p*1LL*q/__gcd(p,q);
        long long ans = multiplecount[p] + multiplecount[q];
        
        if(lcm < N){
            ans -= multiplecount[lcm];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}