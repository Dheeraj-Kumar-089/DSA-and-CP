#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define int long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fora(i, a, b) for (int i = a; i < n; ++i)
#define ford(i, a, b) for (int i = a; i >= b; --i)

void solve(){
    string s;
    cin>>s;

    int n = s.size();

    vector<char> ans(n);
    ans[0]=s[0];

    	fora(i,1,n) { 
		
		if (s[i] == ans[i - 1]) {

			for (char j = 'a'; j <= 'z'; j++) {

				if (j != s[i - 1]) {
					
					if (i < n - 1 && j != s[i + 1]) {
						ans[i] = j;
						break;
					} else if (i == n - 1) { 
						ans[i] = j;
						break;
					}
				}
			}
		} else {
		
			ans[i] = s[i];
		}
	}

    for(char ch:ans){
        cout<<ch;
    }
    cout<<endl;

    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
   
    while (t--)
    {
        solve();
    }
    return 0;
}