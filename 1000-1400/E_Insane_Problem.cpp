#include <bits/stdc++.h>
using namespace std;

// Function to count valid pairs (x, y) for a single test case
long long count_pairs(int k, int l1, int r1, int l2, int r2) {
    long long count = 0;

    // Iterate over possible values of x in the range [l1, r1]
    for (long long x = l1; x <= r1; ++x) {
        // Start with the smallest valid y for the current x
        long long y = x;

        while (y < l2) {
            // Increase y to the next power of k
            if (y > LLONG_MAX / k) break; // Prevent overflow
            y *= k;
        }

        while (y <= r2) {
            count++;
            if (y > LLONG_MAX / k) break; // Prevent overflow
            y *= k;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        // Output the result for each test case
        cout << count_pairs(k, l1, r1, l2, r2) << endl;
    }

    return 0;
}
