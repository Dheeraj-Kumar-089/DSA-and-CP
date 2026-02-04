// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;
// #define ll long long
// #define vll vector<long long>
// #define vi vector<int>
// #define push push_back
// #define pop pop_back
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
 
// void solve(){
//     ll a,b;
//     cin >> a >> b;
//     ll xk,yk;
//     cin >> xk >> yk;
//     ll xq,yq;
//     cin >> xq >> yq;
//     ll x = abs(xk - xq)-1;
//     ll y = abs(yk - yq)-1;
//     ll sum=a+b;
//     ll maximum = max(a, b);
//     ll minimum = min(a, b);
//     ll mincol = min(yk, yq);
//     ll maxcol = max(yk, yq);
//     ll minrow = min(xk, xq);
//     ll maxrow = max(xk, xq);

    
   
//     int cnt=0;
//     if(x>y){
//         if(minimum>x){
//             cout << 0 << endl;
//             return;
            
//         }
//         if(sum<x+1){
//             cout << 0 << endl;
//             return;
//         }
    
//         for(int i=floor((xk+xq)/2.0);i<=ceil((xk+xq)/2.0);i++){
//             for(int j=mincol-maximum;j<=maxcol+maximum;j++){

//                 ll rowk = abs(i-xk);
//                 ll colk = abs(j-yk);
//                 ll rowq = abs(i-xq);
//                 ll colq = abs(j-yq);
//                 if(sum==(rowk+colk) && sum==(rowq+colq)){
                    
//                     cnt++;
//                 }
//             }
//         }
//     }
//     else
//     {
//         if(minimum>y){
//             cout << 0 << endl;
//             return;
            
//         }
//         if(sum<y+1){
//             cout << 0 << endl;
//             return;
//         }
//         for(int j=floor((yk+yq)/2.0);j<=ceil((yk+yq)/2.0);j++ ){
//             for(int i=minrow-maximum;i<=maxrow+maximum;i++ ){
//                 ll rowk = abs(i-xk);
//                 ll colk = abs(j-yk);
//                 ll rowq = abs(i-xq);
//                 ll colq = abs(j-yq);
//                 if(sum==(rowk+colk) && sum==(rowq+colq)){

//                     cnt++;
//                 }
//             }
//         }
//     }

//     cout << cnt << endl;
    
    
//     return;
    
// }
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define push push_back
#define pop pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
 
void solve(){
    ll a,b;
    cin >> a >> b;
    ll king_row,king_col;
    cin >> king_row >> king_col;
    ll queen_row,queen_col;
    cin >> queen_row >> queen_col;

    int dx[4] = {-1, -1, 1, 1};
    int dy[4] = {-1, 1, -1, 1};

    int count = 0;

    set<pair<int,int>> king_hits,queen_hits;

    for(int i=0;i<4;i++){
        king_hits.insert({king_row + dx[i]*a,king_col + dy[i]*b});
        king_hits.insert({king_row + dx[i]*b,king_col + dy[i]*a});

        queen_hits.insert({queen_row + dx[i]*a,queen_col + dy[i]*b});
        queen_hits.insert({queen_row + dx[i]*b,queen_col + dy[i]*a});

    }

    for(auto position: king_hits){
        if(queen_hits.find(position) != queen_hits.end()){
            count++;
        }
    }   


    
    cout << count << endl;
    
    
    return;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}