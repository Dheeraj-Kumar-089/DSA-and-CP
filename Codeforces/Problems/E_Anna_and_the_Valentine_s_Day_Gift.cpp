#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n, m;
    cin >> n >> m;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    vll noofZeros;
    int totalnoOfDigits=0;
    

    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int count = 0;
        bool flag = true;
        while (a[i] > 0)
        {
            
            if((a[i]%10)==0){
                if(flag) count++;
                totalnoOfDigits++;
            }else{
                flag = false;
                totalnoOfDigits++;
            }
            a[i]/=10;
        }
    
        if(count>0) noofZeros.push_back(count);
        
    }

    sort(rall(noofZeros));

    int temp = 0;
    for (int i = 0; i < noofZeros.size(); i+=2)
    {
        temp+=noofZeros[i];
    }
    int ans=totalnoOfDigits-temp;
    if(ans<=m) cout<<"Anna"<<endl;
    else cout<<"Sasha"<<endl;
    


}

int32_t main()
{
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