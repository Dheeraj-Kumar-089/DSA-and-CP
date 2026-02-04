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


int operations(string& lasttwo, string& num){
	int x = lasttwo[0];
	int y = lasttwo[1];
 
	int steps = 0;
	int j = num.size() - 1;
	while(j > 0 && num[j] != y){
		j--;
		steps++;
	}
 
	int i = j-1;
	while(i>0 && num[i] != x){
		i--;
		steps++;
	}
	return steps;
 
}

void solve(){
    ll n;
	cin>>n;
 
	string num = to_string(n);
 
	vector<string> digits = {"00", "25", "50", "75"};
	int ans = 1e9;
	for(auto digit:digits){
		int mini = operations(digit, num);
		ans = min(mini, ans);
	}
	cout<<ans<<endl;
}

int main(){
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