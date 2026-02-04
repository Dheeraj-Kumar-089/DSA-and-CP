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

    int low = 1;
    int high = n;


    cout<<1<<" "<<1<<" "<<n<<endl;
    int ans1;
    cin>>ans1;

    cout<<2<<" "<<1<<" "<<n<<endl;
    int ans2;
    cin>>ans2;

    int difference = ans2-ans1;

    int ans=-1;


    while(low<=high){
        int mid = low + (high-low)/2;
        int p;
        int q;

        cout<<1<<" "<<1<<" "<<mid<<endl;
        cin>>p;

        cout<<2<<" "<<1<<" "<<mid<<endl;
        cin>>q;


        if(p!=q) high = mid - 1;
        else low = mid + 1;
        

    }

    

    cout<<"!"<<" "<<low<<" "<<(difference+low-1)<<endl;
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