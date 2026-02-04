#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin>>t;



    while (t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> v(n);

        //for (auto &x : v) cin >> x;
        long long int sum=0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }

            long long int index=0;
            int maxi=INT_MIN;
            int mini=INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if(v[i]>maxi) {
                    maxi=v[i];
                }
                if(v[i]<mini)  {
                    mini=v[i];
                }
            }
        int difference=maxi-mini;
        
        if((maxi-mini)<=k){
            if(sum%2==1) cout<<"Tom"<<endl;
            else cout<<"Jerry"<<endl;

        }else{
        while(1)
        {
            index++;
            int idx;
            maxi=INT_MIN;
            mini=INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if(v[i]>maxi) {
                    maxi=v[i];
                    idx=i;
                }
                if(v[i]<mini)  {
                    mini=v[i];
                }
            }

            if(maxi==0 && mini==0){
                break;
            }

            v[idx]--;
            maxi--;

            maxi=INT_MIN;
            mini=INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if(v[i]>maxi) {
                    maxi=v[i];
                    idx=i;
                }
                if(v[i]<mini)  {
                    mini=v[i];
                }
            }
            if(abs(maxi-mini)>k){
                break;
            }
            
        }
    }


        if((difference)>k){
            if(index%2==1) cout<<"Jerry"<<endl;
            else cout<<"Tom"<<endl;

        }
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     //#ifndef ONLINE_JUDGE
//     //freopen("inp.in", "r", stdin), freopen("oup.out", "w", stdout);
//     //#endif
//     #define int long long
//     int t; cin >> t;
//     while (t--) {
//         int n, k; cin >> n >> k;
//         vector<int> a(n);
//         for (auto &x : a) cin >> x;
//         int sum = accumulate(a.begin(), a.end(), 0ll);
//         sort(a.begin(), a.end()); a.back()--;
//         sort(a.begin(), a.end());
//         if (a.back() - a[0] > k || sum % 2 == 0)
//             cout << "Jerry" << endl;
//         else cout << "Tom" << endl;
//     }
// }