#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

ll power(ll exponent)
{

    ll result = 1;
    for (ll i = 1; i <= exponent; i++)
    {
        result *= 3;
    }
    return result;
}

ll coins(ll x)
{

    if (x == 0)
        return 3;

    ll temp = power(x - 1) * x + power(x + 1);
    return temp;
}

ll base3sum(ll n) {
    ll s = 0;
    while (n > 0) {
        s += n % 3;
        n /= 3;
    }
    return s;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll ans = 0;

    if(k>=n){
        cout<<3*n<<endl;
        return;
    }

    if (base3sum(n) > k) {
        cout << -1 << endl;
        return;
    }



    ll p3 = 1;
    ll exponent = 0;
    while (p3 <= n / 3)
    {
        p3 *= 3;
        exponent++;
    }

    ll multiple = n / power(exponent);

   

    while ((multiple <= k) and (exponent >= 0))
    {

        exponent--;
        multiple = n / power(exponent);
    }

    exponent++;


    ll y = n;
    ll i = 0;
    while (y >= k and y>0)
    {
        i++;
        y = n - power(exponent) * i;
    }

    ans += coins(exponent) * i;
    ans += 3 * y;

    cout << ans << endl;
}

int main()
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