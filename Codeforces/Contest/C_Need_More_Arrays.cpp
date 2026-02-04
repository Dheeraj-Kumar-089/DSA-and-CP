#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
 
void solve(){
    ll n;
    cin>>n;
    vector<int> array(n);
    for(auto& x:array) cin>>x;

    ll difference1=0;
    ll answer = 0;
    ll difference0 = 0;

    if(n==1) {
        cout << 1 << endl;
        return;
    }


    for(int i=0;i<n-1;i++){
        if(array[i+1]-array[i] == 1) {
            difference1++;
        } else if(array[i+1]-array[i] == 0) {
            difference0++;
        }
        else{
            answer++;
        }
    }

    // if(difference0 !=0) {
    //     answer += 1;
    // }
    answer += floor((difference1)/2.0);
    cout<<answer+1<<endl;
    

    return;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

