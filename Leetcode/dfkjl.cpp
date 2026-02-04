class Solution {
    public:
      int findKRotation(vector<int> &arr) {
          int n = arr.size();
          int low = 0,high = n-1;
          int ans = INT_MAX;
          int index;
  
          while(low<=high){
              int mid = low + (high - low)/2;
              //search space is already sorted
              // then always arr[low] is will be smaller
              // in that search space
              if(arr[low]<=arr[high]){
                  ans = min(ans,arr[low]);
                  return low;
                  break;
              }
              if(arr[low]<=arr[mid]){
                  int minimum = arr[low];
                  ans = min(ans,minimum);
                  if(arr[low]<ans) index = low;
                  low = mid + 1;
  
              }
              else{
                  int minimum = arr[mid];
                  ans = min(ans,minimum);
                  if(arr[mid]<ans) index = mid;
                  high = mid - 1;
                  
              }
          }
          return index;
      }
  };
  