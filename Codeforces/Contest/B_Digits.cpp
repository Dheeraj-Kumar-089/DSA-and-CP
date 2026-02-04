#include <bits/stdc++.h>
using namespace std;


long long factorial(int n, int mod) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i) % mod;
        if (result == 0) break; // Optimization: stop if mod becomes 0
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> result;
        result.push_back(1);
        int i = 3;
        while(i<=9){

            int digit = (d*4)%i;
            
           
            long long fact = factorial(n,i-1);
             
            long long power = pow(10,fact);

            int mod = (power-1);
            if ((digit*mod)==0)
            {
                result.push_back(i);
            }
            i += 2;
        }

        for(auto num: result){
            cout<<num<<" ";
        }
        cout<<endl;

        
    }
}

