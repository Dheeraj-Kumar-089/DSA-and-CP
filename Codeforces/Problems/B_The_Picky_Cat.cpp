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
        int n;
        cin>>n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt+= (abs(v[i]))<(abs(v[0]));
        }
        
        cout<< (cnt <= (n/2) ? "YES" : "NO")<<endl;
        

    }
    
    return 0;
}