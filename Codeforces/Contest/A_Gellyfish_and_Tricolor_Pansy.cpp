#include <bits/stdc++.h>
using namespace std;

const long long M = 998244353;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b == 1) {
            cout << "Gellyfish"<<endl;
            continue;
        }
        if (a == 1) {
            cout << "Flower"<<endl;
            continue;
        }
        if (d == 1) {
            cout << "Gellyfish"<<endl;
            continue;
        }
        if (c == 1) {
            cout << "Flower"<<endl;
            continue;
        }
        if (d < c) {
            cout << "Gellyfish"<<endl;
        } else if (c < d) {
            cout << "Flower"<<endl;
        } else {
            if (b <= a) {
                cout << "Gellyfish"<<endl;
            } else {
                cout << "Flower"<<endl;
            }
        }
    }
    return 0;
}
