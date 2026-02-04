#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, duplicate_id;
  cin >> n;
  map<int, int> id;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    id[x]++;
    if(id[x] > 1){
        duplicate_id = x;
        break;
    }
  }

  cout << duplicate_id;

  return 0;
}