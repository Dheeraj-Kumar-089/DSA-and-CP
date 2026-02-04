#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int arr[n];
    unordered_map<int,int> mp;
    //pre computee
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }


    for(auto it : mp){
        cout << it.first << "->" << it.second << endl;
    }
    
    // fetch
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mp[number] << endl;
    }
    

    
    
    return 0;
}