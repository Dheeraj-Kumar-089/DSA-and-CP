#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n;
    cin>>n;

    multimap<int,int> maxi;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        int maximum=LLONG_MIN;


        for (int j = 0; j < x; j++)
        {
            int y;
            cin>>y;
        
            maximum = max(maximum,y-j);

        }

        maxi.insert({maximum+1,x});
    }
    int ans = 0;
    int temp = 0;
    int minimize=0;

    for(auto& pair:maxi){

        if(temp<pair.first){
            ans=pair.first-minimize;
            temp = pair.first+pair.second;
        }else temp += pair.second;
        minimize+=pair.second;

    }

    cout<<ans<<endl;







    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}