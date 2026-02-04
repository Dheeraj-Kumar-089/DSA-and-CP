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

vll primeFactors(int n)
{
    vll factors;

    while (n % 2 == 0)
    {
        n = n / 2;
        factors.push_back(2);
    }

    for (int i = 3; i * i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            n = n / i;
            factors.push_back(i);
        }
    }

    if (n > 2)
    {
        factors.push_back(n);
    }
    return factors;
}

void solve()
{
    int n;
    cin >> n;

    vll factors = primeFactors(n);
    vll ans;
    
    if (factors.size() < 3)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        
        ans.push_back(factors[0]);
        if (factors[1] != factors[0])
        {
            ans.push_back(factors[1]);
            int temp = 1;
            for (int i = 2; i < factors.size(); i++)
            {
                temp *= factors[i];
            }
            if(temp!=factors[0] && temp!=factors[1] && temp!=1){
                ans.push_back(temp);
            }
            
        }

        else
        {
            ans.push_back(factors[1]*factors[2]);

            int temp = 1;
            for (int i = 3; i < factors.size(); i++)
            {
                temp *= factors[i];

            }

            if((temp!=(factors[1]*factors[2])) && (temp!=factors[0]) && temp!=1){
                ans.push_back(temp);
                
            }
            
        }

        
    }

    if(ans.size()<3) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        for(auto& x:ans){
            cout<<x<<" ";

        }
        cout<<endl; 
    }

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