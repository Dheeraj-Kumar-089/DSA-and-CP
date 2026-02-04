// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;

//         vector<long long int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>v[i];
//         }
//         long long int s = 0;
//         int count = 0;
//         long long int oddcount = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if(v[i]%2!=0){
//                 oddcount++;
//             }
//         }
//         if(n==1){
//             if(v[0]%2==0){
//                 cout<<1<<endl;
//             }
//             else{
//                 cout<<0<<endl;
//             }
//         }
//         else{for (int i = 0; i < n; i++)
//         {
//             if(v[0]%2!=0){
//                 count = oddcount + 1;
//             }

//             else{s = s + v[i];
//             if(s%2==0){
//                 count++;
//             }
//             while (s%2==0)
//             {
//                 s=s/2;
//             }
//             }
            
//         }
//         cout<<count<<endl;
//         }
        
        

        

//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int power_of_two(long long x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}

void solve() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), [](long long x, long long y) {
            return power_of_two(x) > power_of_two(y);
        });

        long long s = 0;
        int points = 0;

        for (int i = 0; i < n; ++i) {
            s += a[i];
            if (s % 2 == 0) {
                points++;
                while (s % 2 == 0) {
                    s /= 2; 
                }
            }
        }

        cout << points << endl; 
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
