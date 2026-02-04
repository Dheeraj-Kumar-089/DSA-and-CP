#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
  
      int findFloor(vector<int>& arr, int x) {
          int n = arr.size();
          int low = 0,high = n-1;
          int maximum = INT_MIN;
          while(low<=high){
              int mid = low + (high - low)/2;
              if(arr[mid]<=x){
                  low = mid + 1;
                  maximum = max(arr[mid],maximum);
                  
              }
              else{ 
                  high = mid - 1;
                  maximum = max(arr[mid],maximum);
              }
          }
          
          int target = maximum;
          int ans;
          while (low <= high) {
              
          int mid = (low + high) / 2;
          if (arr[mid] == target) return ans = mid;
          else if (target > arr[mid]) low = mid + 1;
          else high = mid - 1;
      }
          
          return ans;
      }
  };


  int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t -- ) {
    
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
    arr.push_back(number);
    }
    string ks;
    getline(cin, ks);
    int x = stoi(ks);
    Solution ob;
    int ans = ob.findFloor(arr, x);
    
    cout << ans << endl;
}
    
    return 0;
    }
    