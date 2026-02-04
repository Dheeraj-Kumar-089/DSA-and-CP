#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    while(tc--){

        long long n;
        cin >> n;
        string nn = to_string(n);

        if(n%10 == 0){
            cout << 0 << endl;
            continue;
        }
        vector<long long>v;int i=1,flg = 1;
        
        while(pow(10,i) <= n){
            double ans = n/( 1 + pow(10,i));
            if(ans == floor(ans)){
                v.push_back(ans);
            }
            i++;
        }
        sort(v.begin(),v.end());
        int s = v.size();
        cout << s << endl;
        for(auto i : v){
            cout << i << " ";
            flg = 0;
        }
        if(flg == 0){
            cout << endl;
        }
    }
    return 0;
} , y qs the secret number ,isme galati kya h