#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a.insert(x);
        }
        set<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            b.insert(x);
        }
        long long penalty = 0;
        for(int i = 0; i < 1000; i++){
            if(a.find(i+1)!=a.end()){
                continue;
            }
            if(b.find(i+1)!=b.end()){
                continue;
            }
            if(a.find(i+1)==a.end() && b.find(i+1)==b.end()){
                penalty += i;
            continue;

            }
 
    }
    cout<<penalty<<endl;


    
}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}