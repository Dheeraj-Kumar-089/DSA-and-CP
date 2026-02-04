#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;


    
    
    //percompute 
    int hash[256]={0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
        // hash[s[i]-'a']++; if string is in lowercase only
    }


    int q;
    cin >> q;
    while (q--) //fetch 
    {
        char c;
        cin >> c;
        cout << hash[c] << endl;
        // cout << hash[c - 'a'] << endl;
    }
    
    return 0;
}