class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<long long int,int> prefixSum;
        int maxLength=0;
        long long int sum = 0;
        for(int i=0;i<nums.size();i++){
            
            sum += nums[i];
            if(sum==k){
                maxLength=max(maxLength,i+1);
            }
            long long int rem = sum - k;
            
            if(prefixSum.find(rem)!=prefixSum.end()){
            maxLength=max(maxLength,i-prefixSum[rem]);
            }

            if(prefixSum.find(rem)==prefixSum.end()) prefixSum[sum]=i;
        }

        return maxLength;
    }
};
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    return 0;
}