
#include <bits/stdc++.h>
using namespace std;

int streak(vector<int>& vi) {
    int maximumlenth=1,currentlength=1, n=vi.size();
    
    for (int i = 1; i < n; i++) {
        if (vi[i] >= vi[i-1]) {
            currentlength++;
        }else{
            currentlength=1;
        }
        maximumlenth= max(maximumlenth, currentlength);
    }
    
    return maximumlenth;
}

int maximum(vector<int> vi, int x) {
    int maxcount=streak(vi);
    
    for (int i = 0; i < vi.size(); i++) {
        int original = vi[i];
        vi[i] *= x;
        maxcount=max(maxcount,streak(vi));
        vi[i]=original;
    }
    
    return maxcount;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while(t--) {
        int n,x;
        cin>>n>>x;
        
        vector<int> vi(n);
        for (int i=0;i<n;i++) {
            cin>>vi[i];
        }
        cout<<maximum(vi,x)<<endl;
    }
    
    return 0;
}
