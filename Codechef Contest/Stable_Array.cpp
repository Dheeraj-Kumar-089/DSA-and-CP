// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int test_cases;
//     cin >> test_cases;

//     while (test_cases--) {
//         int num_elements;
//         cin >> num_elements;
//         vector<int> arr(num_elements);
//         for (int i = 0; i < num_elements; ++i) cin >> arr[i];

//         queue<int> indices;
//         for (int i = 0; i < num_elements - 1; ++i) {
//             if (arr[i] < arr[i + 1]) indices.push(i);
//         }

//         int seconds = 0;
//         while (!indices.empty()) {
//             ++seconds;
//             int current_size = indices.size();
//             for (int i = 0; i < current_size; ++i) {
//                 int index = indices.front();
//                 indices.pop();
//                 if (arr[index] < arr[index + 1]) {
//                     arr[index] = arr[index + 1];
//                     if (index > 0 && arr[index - 1] < arr[index]) indices.push(index - 1);
//                 }
//             }
//         }

//         cout << seconds << "\n";
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0 ;i<n;i++)
    {
        cin>>a[i];
    }
    
    int cnt = 0;
    int cur = a[n - 1];
    int ans = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < cur) {
            cnt++;
            ans = max(cnt,ans);
        }
        else{
            cur = a[i];
            cnt = 0;
        }
    }

    cout <<ans << endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

