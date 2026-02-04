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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,d;
    cin>>n>>d;

    vll power(n);
    for(auto &x:power) cin>>x;

    sort(power.begin(), power.end());
 
    ll left = -1;
    ll right = n - 1;
    ll teamsize = 1;
    ll teams = 0;
 
    while (left < right) 
    {
        if ((power[right] * teamsize) <= d && left < right)
        {
            left++;
            teamsize++;
        }
        else
        {
            teams++;
            right--;
            teamsize = 1;
        }
    }
 
    cout << teams << endl;

    return 0;
}