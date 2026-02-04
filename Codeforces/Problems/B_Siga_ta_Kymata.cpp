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

void solve(){
    int n;
    cin>>n;

    vll p(n);
    int pos1 = -1;
    int posn = -1;
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        if(p[i] == 1) pos1 = i;
        if(p[i] == n) posn = i;
    }
    
    string s;
    cin>>s;

   
    if(s[0]=='1' or s[n-1]=='1'){
        cout<<-1<<endl;
        return;
    }

    vll minimumleft(n);
    vll minimumright(n);
    vll maximumleft(n);
    vll maximumright(n);

 
    minimumleft[0] = 2e18;
    maximumleft[0] = -1;   
    for (int i = 1; i < n; i++)
    {
       
        minimumleft[i] = min(minimumleft[i-1], p[i-1]);
        maximumleft[i] = max(maximumleft[i-1], p[i-1]);
    }

    
    minimumright[n-1] = 2e18; 
    maximumright[n-1] = -1;  
    for (int i = n-2; i >= 0; i--)
    {
        
        maximumright[i] = max(maximumright[i+1], p[i+1]);
        minimumright[i] = min(minimumright[i+1], p[i+1]);
    }
   

    bool flag = true;

    for (int i = 1; i < s.size()-1; i++)
    {
        if(s[i]=='1'){
        
            int maximum = max(maximumleft[i], maximumright[i]);
        
            int minimum = min(minimumleft[i], minimumright[i]);
            
            
            if(p[i] > minimum && p[i] < maximum){
                continue;
            } else {
                flag = false;
                break;
            }
        }
    }

    if(flag){
   
        int L = min(pos1 + 1, posn + 1);
        int R = max(pos1 + 1, posn + 1);

        cout << "5"<<endl;
        cout << L << " " << R << endl;
        cout << 1 << " " << L << endl;
        cout << 1 << " " << R << endl;
        cout << L << " " << n << endl;
        cout << R << " " << n << endl;

    } else {
        
        cout << -1 << endl;
    }
}

int32_t main(){
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