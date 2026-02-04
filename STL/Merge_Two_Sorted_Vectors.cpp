#include<bits/stdc++.h>
using namespace std;


int main() { 
  long long int n,m;
  cin>>n>>m;
  vector<long long int> v1(n);
  vector<long long int> v2(m);
    for(int i=0; i<n; ++i){
    cin>>v1[i];
    }

   for(int i=0; i<m; ++i){
    cin>>v2[i];
  }
  bool flag = true;
  for(int i=0; i<n-1 ; ++i){
      if(v1[i]>v1[i+1]){
          flag=false;
          break;
      }
  }
    for(int i=0; i<m-1 ; ++i){
      if(v2[i]>v2[i+1]) {
          flag=false;
          break;
      }
  }
  bool is_sorted_v1 = is_sorted(v1.begin(), v1.end());
  bool is_sorted_v2 = is_sorted(v2.begin(), v2.end());
 if (is_sorted_v1 && is_sorted_v2) {
    vector<int> v3(n + m);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for (int num : v3) {
      cout << num << " ";
    }
    }else{
        if(n>m){
            reverse(v1.begin(),v1.end());
            for(int num : v1)
        { std::cout << num << " ";
        }
        }else{
            reverse(v2.begin(),v2.end());
            for(int num : v2)
        { std::cout << num << " ";
        }
        }
        
    }

}
