#include<bits/stdc++.h>
using namespace std;

    
int main(){
    int n;
    cin>>n;
    map<string, vector<string>> anagramGroups;
for (int i=0;i<n;++i) {
    string key;
    cin>>key;
    string strs = key;
    sort(key.begin(), key.end());
    anagramGroups[key].push_back(strs);
}
   
    vector<vector<string>> result;
    for (auto pair:anagramGroups)
    {
        result.push_back(pair.second);
    }
    
    for (int i = 0;i < result.size(); ++i) { 
        for (int j = 0; j < result[i].size(); j++) 
        cout << result[i][j] << " "; 
        cout << endl; 
    }
    // for (const auto& group : result) {
    //     for (const auto& word : group) {
    //          cout << word << " "; 
    //          } 
    //          cout << endl;
    // }
    
return 0;
    }

