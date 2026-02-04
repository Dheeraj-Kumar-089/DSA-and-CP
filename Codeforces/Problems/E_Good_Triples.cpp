#include <iostream>

void solve() {
    int n;
    std::cin >> n;

    long long total_ways = 1;
    int temp_n = n;

    // Handle the case of n=0, where the loop won't run.
    // The only triple is (0,0,0).
    if (temp_n == 0) {
        std::cout << 1 << std::endl;
        return;
    }

    while (temp_n > 0) {
        int digit = temp_n % 10;
        
        // Calculate C(digit + 2, 2)
        long long ways_for_digit = (long long)(digit + 2) * (digit + 1) / 2;
        
        total_ways *= ways_for_digit;
        temp_n /= 10;
    }

    std::cout << total_ways << std::endl;
}

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}