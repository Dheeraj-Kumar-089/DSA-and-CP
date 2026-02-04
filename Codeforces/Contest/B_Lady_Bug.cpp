#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
 
void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<char> arr1(n);
    vector<char> arr2(n);
    int cnt1=0;
    int cnt2=0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0) arr1[i]=a[i];
        else arr1[i]=b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(i%2==0) arr2[i]=b[i];
        else arr2[i]=a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr1[i]=='0') cnt1++;
        if(arr2[i]=='0') cnt2++;
    }
    if(n%2==0){
        if(cnt1>=(n/2) && cnt2>=(n/2)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    else{
    if(cnt1>(n/2) && cnt2>=(n/2)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    
    

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