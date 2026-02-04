
    bool isPossible(vector<int>& bloomDay,int mid,int m,int k){
        int noOfB=0;
        int cnt=0;

        while()
    noOfB+=(cnt/k);
    if(noOfB>=m) return true;
    else return false;
    }

    

        int low = mini, high = maxi;
        int ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(isPossible(bloomDay,mid,m,k)==true){
                high = mid - 1;
                ans = mid;
            }
            else{
                low = mid+1;
            }
        }
        long long value = m*1LL*k*1LL;
        if(value>bloomDay.size()) return -1;
        else return ans;
    }
};

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        priority_queue<int,int> p;
        for (int i = 0; i < n; i++)
        {
            int x,y;
            cin>>x>>y;
            (x);
            
        }

        int low = 1;
        int high = n;

        while(low<=high){
            if(isPossible(v,mid))
        }
        

        

}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}