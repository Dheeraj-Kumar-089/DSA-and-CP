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
    string str;
    cin>>str;

    bool isSquare = false;
    int number = stoi(str);
    for (int i = 0; i < 101; i++)
    {
        if(i * i == number) {
            isSquare = true;
            cout<< "0" << " " << i << endl;
            break;
        }
    }

    if(isSquare==false) cout<<-1<<endl;

    return;
    
}
#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}   