#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;

    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        long long cnt = 0;
        long long i=0;
        while(i<n){
            if(i+a<=n){
            cnt+=a;
            }
            else{
                cnt+=n-i;
            }
            i+=(a+b);
        }
        cout<<cnt<<endl;

}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}