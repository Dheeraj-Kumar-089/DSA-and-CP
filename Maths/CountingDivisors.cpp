#include <iostream>
using namespace std;

int countDivisors(int n) {//O(sqrt(n));
    int divisors = 0;
    
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) {
                cout<<i<<endl;
                divisors++;
            } else {
                divisors += 2;
                cout<<i<<endl;
            } 
        }
    }
    
    return divisors;
}
int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int num;
        cin >> num;
        
        int result = countDivisors(num);
        cout << result << endl;
    }
    
    return 0;
}