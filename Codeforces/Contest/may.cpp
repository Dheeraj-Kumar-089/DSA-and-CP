#include <bits/stdc++.h>

#include <numeric>

using namespace std;

#define ll long long

#define vll vector<ll>

#define pub push_back

#define all(v) (v).begin(), (v).end()

#define rall(v) (v).rbegin(), (v).rend()



template<typename T>

T binpow(T a, ll b, T mod = 0) {

    T res = 1;

    if (mod > 0) a %= mod;



    while (b > 0) {

        if (b & 1) {

            if (mod > 0)

                res = (res * a) % mod;

            else

                res = res * a;

        }

        if (mod > 0)

            a = (a * a) % mod;

        else

            a = a * a;

        b >>= 1;

    }

    return res;

}



const ll MAX_N = 1000000LL;

vector<ll> spf(MAX_N + 1);

void summon_sieve() {

    iota(spf.begin(), spf.end(), 0LL);

    for (ll i = 2; i * i <= MAX_N; i++) {

        if (spf[i] == i) {

            for (ll j = i * i; j <= MAX_N; j += i) {

                if (spf[j] == j) spf[j] = i;

            }

        }

    }

}



vector<pair<ll,ll>> prm_fctrs(ll x) {

    vector<pair<ll,ll>> res;

    while (x > 1) {

        ll p = spf[x], cnt = 0;

        while (x % p == 0) { x /= p; cnt++; }

        res.emplace_back(p, cnt);

    }

    return res;

}







namespace SaiyaNCr {

    ll mod = 1000000007LL;

    int COMB_MAXN = 1000005;

    vector<ll> fac;

    vector<ll> inv_fac;





    ll modinv(ll a) {

        if (mod <= 1) return 0;

        return binpow(a, mod - 2, mod);

    }

/*



    */



    void awaken(int maxn = 1000005) {

        COMB_MAXN = maxn;

        if (mod == 0) return;

        fac.assign(COMB_MAXN, 0);

        inv_fac.assign(COMB_MAXN, 0);

        fac[0] = 1;

        for (int i = 1; i < COMB_MAXN; ++i) fac[i] = fac[i-1] * i % mod;

        inv_fac[COMB_MAXN-1] = modinv(fac[COMB_MAXN-1]);

        for (int i = COMB_MAXN-2; i >= 0; --i) inv_fac[i] = inv_fac[i+1] * (i+1) % mod;

    }



    ll nCr(int n, int r) {

        if (r < 0 || r > n) return 0;

        if (mod == 0) {

            r = min(r, n - r);

            ll res = 1;

            for (int i = 1; i <= r; ++i) {

                res = res * (n - i + 1) / i;

            }

            return res;

        }

        if (mod == 1) return 0;

        return fac[n] * inv_fac[r] % mod * inv_fac[n - r] % mod;

    }



    vector<ll> get_divisors(ll n, bool sorted = true) {

        vector<ll> divs;

        for (ll i = 1; i * i <= n; ++i) {

            if (n % i == 0) {

                divs.push_back(i);

                if (i != n / i) divs.push_back(n / i);

            }

        }

        if (sorted) sort(divs.begin(), divs.end());

        return divs;

    }



}







struct DSU {

    vector<int> parent, rnk, sz;

    DSU(int n) : parent(n), rnk(n, 0), sz(n, 1) {

        for (int i = 0; i < n; i++) parent[i] = i;

    }



    int findboss(int x) {

        return parent[x] == x ? x : parent[x] = findboss(parent[x]);

    }



    void uni_rank(int a, int b) {

        a = findboss(a); b = findboss(b);

        if (a == b) return;

        if (rnk[a] < rnk[b]) swap(a, b);

        parent[b] = a;

        if (rnk[a] == rnk[b]) rnk[a]++;

    }



    void uni_sz(int a, int b) {

        a = findboss(a); b = findboss(b);

        if (a == b) return;

        if (sz[a] < sz[b]) swap(a, b);

        parent[b] = a;

        sz[a] += sz[b];

    }

};





void solve() {

  ll n;cin>>n;

  vll a(n);

  for(auto &i:a)cin>>i;

  

  vll eve,odd;

  for(auto &i:a){

    if(i&1){

      odd.pub(i);

    }

    else{

      eve.pub(i);

    }

  }

  

  sort(all(odd));

  reverse(all(odd));

  sort(all(eve));

  reverse(all(eve));

  

  if(odd.empty()){

    for(ll i=0;i<n;i++){

      cout<<"0"<<(i+1==n?"\n":" ");

    }

    return;

  }

  

  vll ans(n+1);

  

  ll sz=eve.size();

  

  vll pre(sz+1,0);

  



  for(ll i=1;i<=sz;i++)pre[i]=pre[i-1]+eve[i-1];

  

  for(ll i=1;i<=n;i++){

    ll e=min(i-1,sz);

    ll o=i-e;

  

  if(o%2==0){

    o++;

    e--;

  }

  

  

  if(o<=odd.size() && e>=0){

    ans[i]=odd[0]+pre[e];

  }

  else{

    ans[i]=0;

  }

}



for(ll i=1;i<=n;i++){

  cout<<ans[i]<<(i==n?"\n":" ");

}

  

}



int main() {

    ios::sync_with_stdio(false);

    cin.tie(NULL);



    //  summon_sieve();

    // SaiyaNCr::mod=given_def

    //  SaiyaNCr::awaken();



    int t = 1; cin >> t;

    while (t--) solve();



    return 0;

}



/*

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠈⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠈⢭⡻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⠀⠹⣦⢻⣿⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⠛⠛⠛⠛⠛⠛⠛⠛⣛⡻⢿⣿⣿⠀⠀⠀⠀⠀⠀⢹⣧⢻⣿⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠙⢷⣭⡻⡇⠀⠀⠀⠀⠀⠀⢿⣎⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠙⣿⣎⠀⠀⠀⠀⠀⠀⠸⣿⡼⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠈⢻⠆⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠋⠉⠀⠒⠲⢶⣦⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⡿⠟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣶⣶⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⡽⠬⠉⠉⠉⠉⠛⠛⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⣠⡿⠋⡀⠀⠀⠀⣠⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣴⣶⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣛⣛⣛⣛⣦⠄⠀⠀⠀⠀⠀⠀⠁⠀⠀⢰⠟⣠⢶⠁⠀⠀⣴⢟⣵⠀⢠⠆⠀⡀⠀⠀⠀⣀⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠛⠉⠛⠒⠛⠃⠀⡤⠀⠀⠀⠀⠄⠀⠀⣸⣯⡿⠀⠀⢈⣴⣿⡟⠀⠅⠀⠀⡅⠀⠴⠶⠶⠖⠋⠉⠛⠛⠻⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣤⣄⣀⠀⠀⠀⠸⡄⠀⠀⢀⣀⠀⠐⢿⣿⡇⠀⣴⡿⠟⠉⣀⣀⡀⢀⣷⠁⠀⠀⠀⠀⢀⣀⣤⣴⣾⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣄⡘⢇⠀⠀⠀⣿⣼⣄⣠⡙⡁⡜⣉⣀⣰⣿⣏⣿⠃⢸⠇⠀⠀⣠⣶⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠋⠁⠉⠂⠀⢠⣬⣭⣿⣿⢿⣿⣟⣛⣓⣶⣾⠏⠚⠁⠀⠀⠉⠉⠈⢉⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣶⣶⣆⣠⠀⠀⢻⣿⣿⣟⢸⣿⣿⣿⣿⣿⡟⢠⣤⣤⣴⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⣴⣆⠈⠻⣿⣯⠵⠿⣿⣿⡿⢋⣾⣜⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠿⣛⣵⡾⢇⣿⠹⣆⠀⠘⠿⣿⣿⢟⣩⢮⣾⣿⣿⣿⣿⣮⡻⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠙⠉⠀⠀⠠⠾⠛⠁⣠⣾⡿⠀⠹⣆⢹⣄⠀⣶⡿⣣⢏⣿⣿⣷⣮⡙⢿⣷⡁⣮⢁⣍⠻⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣩⣭⣥⣤⣤⣝⣂⡻⠧⠛⢱⣟⣀⣽⣿⣟⣋⣉⡶⢒⣼⡇⣼⣿⠀⠀⠀⣞⠿⣿⣿⣿⣿⣿⣿⣿

⣿⣿⣿⣿⣿⢛⣉⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠴⣾⣿⣿⣿⣿⣿⡆⢸⣿⣿⣿⣿⣭⣝⠛⣫⣾⣿⡿⢰⣿⣿⡇⠀⠀⣿⡄⢠⣮⣝⡻⢿⣿⣿⣿

⣿⣿⣿⣿⡇⣿⣿⣿⢿⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⠿⠿⢿⣿⡇⠈⢿⠿⠿⢟⣫⣵⣿⣿⡿⠟⢡⣿⣿⣿⡇⠀⢀⣿⣧⣿⣿⣿⣿⣷⣮⡛⣿⣿

⣿⣿⡿⠋⠀⢿⣿⣿⢸⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠢⢤⣀⡀⠈⠙⠻⢿⣷⣶⣶⣾⣿⣿⣿⡿⠟⠋⠁⠀⢀⣾⣿⣿⣿⡇⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⢣⣿⣿

⣿⡿⠁⠀⠀⢸⣿⡏⠈⣿⡿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠒⠲⠶⠶⣿⡿⠿⠛⠉⠁⠀⠀⠀⡀⣀⣾⣿⣿⣿⣿⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⢏⣶⡙⣿

⡿⠃⠀⠀⢀⡎⣿⡇⠀⢿⡇⠘⢿⣿⡀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢒⣩⣾⣿⢟⣽⣿⣿⣿⣿⣿⣿⣿⣿⡟⣿⣿⣿⡟⣼⣿⣷⠿

⡇⠀⠀⠀⢸⣿⡘⡇⠀⠸⡇⠀⠈⢿⣷⠀⠀⠸⣷⣤⡀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣀⣀⣠⢄⣠⣶⣿⣿⢟⣵⣿⡟⣿⣿⣿⣿⣿⣿⣿⣿⠁⢻⣿⡟⠀⣫⣾⣿⡇

⣷⠀⠀⠀⠈⢿⣿⡄⠀⠀⢣⠀⠀⠈⢿⣷⡀⠀⢻⣿⣿⣷⣤⣀⠀⠀⠀⠈⠉⠉⠉⢉⣩⣶⣿⠿⠛⢉⣴⣿⠟⠉⢰⣿⣿⣿⣿⣿⣿⣿⡏⠀⠘⠉⠀⠀⣩⢟⣩⣾

⣿⠀⠀⠈⠳⢤⣉⠃⠀⠀⠈⠀⠀⠀⠀⢻⣷⡄⠈⣿⠻⢿⣿⣿⣿⣷⣶⣤⣤⣤⣾⠿⠛⠉⠁⣠⣴⣿⠟⠁⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⣈⣵⣿⡏⣿

⡏⠀⠀⣿⣷⡶⢉⡀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣦⡸⣷⡀⠉⠙⠛⠿⠿⠟⠛⠉⠀⠀⢀⣤⣾⡿⠛⠁⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⠇⠀⢀⣀⣴⣦⣭⣻⣿⣶⢻

⠀⠀⢰⣿⣿⣾⣿⣿⣿⣶⣶⣦⡄⠀⠀⠀⠀⠈⢿⣿⣿⣿⣄⠀⠀⠀⠀⠀⣀⣀⣤⣾⣿⠿⠋⠀⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿⣿⣿⡟⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏

*/



//                       /^\
//            /         (/^\)     /
//       \   ( \         \ /     ( \     /^\
//      / )   \ |        _|_      \ |   |/^\|
//     | /    _|_        | |      _|_    \ /
//     _|_    | |        | |      | |    _|_
//     | |    | |        | |      | |    | |
//     | |    | |    ****| |******| |    | |
//     | |****| |****    | |      | |****| |
//    *| |    | |                 | |    | |*****
//  *  | |   H  A  P  P  Y               | |      *
// *                                               *
// | *            B  I  R  T  H  D  A  Y  !      * |
// |  *****                                 *****  |
// |@      **********             **********      @|
// | @   @           *************           @   @ |
// |  @@@ @    @                       @    @ @@@  |
// |       @@@@ @      @       @      @ @@@@       |
//  *            @@@@@@ @     @ @@@@@@            *
//   *                   @@@@@                   *
//    *****                                 *****
//         **********             **********
//                   *************



//                 * * *
//           *   *       *
//      *  *   *    * *       *
//     *  *   *   *        *    *
//    *  *   *   *    * *    *    *
//   *   *   *  *   *     *    *   *
// * *    *      *     *   *    *   *
// *  *    *       * *    *      *  *
// **  *     * *        *        *  *
// * *  *       *     *         *  *
// *  *   *****     *          *  *
//  *   *      *  *          *    *
//  *     *      *         *      *
//  *       *     *      *        *
//  *        *     *   *          *
//  *          *   * *            *
//   *          *   *            *
//    *         *  *            *
//     *        *  *           *
//       *     *    *        *
//         * * * * * * * * *
//           * * * * * * *
//             * * * * *
//               * * *
//                 *
//                 *
//                 *
//                 *
//                 *>
//                 *         * *
//                 *       *    *
//                <*     *     *
//                 *    *     *
//                 *   *     *
//                 *  *    *
//                 * *   *
//                 **  *
//                 * *
//   


// XXXXX      X    X  XXXXX XXXXX XXXXXX  XXXXXX XXXXXXXX
// XX   XX    X    X  X     X     X   XX  X    X     X   
// XX    XX   X    X  X     X     X  XX   X    X     X   
// XX     XX  XXXXXX  XXXXX XXXXX XXXX    XXXXXX  X  X   
// XX    XX   X    X  X     X     X  XX   X    X  X  X   
// XX   XX    X    X  X     X     X   XXX X    X  XXXX   
// XXXXX      X    X  XXXXX XXXXX X    XX X    X   XX    *

//     /$$$$$$$  /$$                                                 
//    | $$__  $$| $$                                                 
//    | $$  \ $$| $$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$  /$$$$$$  /$$
//    | $$  | $$| $$__  $$ /$$__  $$ /$$__  $$ /$$__  $$|____  $$|__/
//    | $$  | $$| $$  \ $$| $$$$$$$$| $$$$$$$$| $$  \__/ /$$$$$$$ /$$
//    | $$  | $$| $$  | $$| $$_____/| $$_____/| $$      /$$__  $$| $$
//    | $$$$$$$/| $$  | $$|  $$$$$$$|  $$$$$$$| $$     |  $$$$$$$| $$
//    |_______/ |__/  |__/ \_______/ \_______/|__/      \_______/| $$
//                                                          /$$  | $$
//                                                         |  $$$$$$/
//                                                          \______/ 