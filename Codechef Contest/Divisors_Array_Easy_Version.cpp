#include <bits/stdc++.h>
using namespace std;


int fact(int m){
    int factorial = 1;
    for (int i = 1; i <= m; i++) {
        factorial =  (factorial*i)%((10<<9)+7);
    }
    return factorial;
}

int countDivisors(int n) {
    int divisors = 0;
    
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            
                divisors += 2;  
        }
    }
    
    return divisors;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n,m;
    cin>>n>>m;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    fact(m);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        b[i] = a[i]*fact(a[i]);
    }

    
        
    for(int i=0;i<n;i++){
        int result = countDivisors(b[i]);
        cout<<result<<" ";
    }

    
return 0;
}