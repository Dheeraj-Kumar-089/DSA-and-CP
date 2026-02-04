#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;

    while(t--){
        int k,l,m,n,d;
        int defective=0;
        set<int> s;
        cin>>k>>l>>m>>n>>d;
        
            for(int i=k;i<=d;i+=k){

                s.insert(i);
            }
            for(int i=l;i<=d;i+=l){

                s.insert(i);
            }
            for(int i=m;i<=d;i+=m){

                s.insert(i);
            }
            for(int i=n;i<=d;i+=n){

                s.insert(i);
            }

        defective = s.size();
        cout<<defective<<endl;

}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}