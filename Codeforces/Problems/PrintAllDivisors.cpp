// class Solution {
//   public:
//     void print_divisors(int n) {
//         priority_queue<int> arr;
//         for(int i=1;(i*i)<=n;i++){
//             if(n%i ==0){
//                 arr.push(i);
//             }
//             if(n/i != i){
//                 arr.push(n/i);
//             }
//         }
//         while (!arr.empty())
//         {
//             cout<<arr.top()<<" ";
//             arr.pop();
//         }
        
//         }
// };

// #include<bits/stdc++.h>
// using namespace std;

//  void print_divisors(int n) {
//         vector<int> arr;
//         int largest = 0;
//         for(int i=1;(i*i)<=n;i++){
//             if(n%i ==0){
//                 arr.push_back(i);
//                 largest=i;
//             }
//         }
//         for(int i=largest;i>=1;i--){
//             if(n/i != i){
//                 arr.push_back(n/i);
//             }
//         }
//         for (int i = 0; i < arr.size(); i++)
//         {
//             cout<<arr[i]<<" ";
//         }
        
        
//     }


// #include<bits/stdc++.h>
// using namespace std;

//  void print_divisors(int n) {
//         int largest=0;
//         for(int i=1;(i*i)<=n;i++){
//             if(n%i ==0){
//                 cout<<i<<" ";
//                 largest=i;
//             }
//         }
//         for(int i=largest;i>=1;i--){
//             if(n%i==0){
//             if(n/i != i){
//                 cout<<(n/i)<<" ";
//             }
//         }
//     }
        
//     }

#include<bits/stdc++.h>
using namespace std;

 void print_divisors(int n) {
        set<int> arr;
        int largest=0;
        for(int i=1;(i*i)<=n;i++){
            if(n%i ==0){
                arr.insert(i);
            
                if(n/i != i){
                arr.insert(n/i);
            }
        }
        }
        for(auto i:arr){
            cout << i << " ";
        }
    }


int main(){

    print_divisors(20);
    
    return 0;
}