#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	while (t--)
    {
        int n;
        cin>>n;
        vector<int> day(n);
        for (int i = 0; i < n; i++)
        {
           cin>>day[i];
        }
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[day[i]]=i+1;
        }
        int sum = 0;
        for (const auto &pair : mp) {
            sum += pair.second;
        }
        cout<<sum<<endl;

        
        
    }
    
return 0;
}