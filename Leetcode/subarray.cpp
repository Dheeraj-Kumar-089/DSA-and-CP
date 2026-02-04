class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int st = 0,end = 2,count=0,n=nums.size();
        while(end<n){
            float val=(nums[(st+end)/2])/2.0;
            if(nums[st] + nums[end] == (val)){ //if sum of elements is half of middle element
                st++;
                end++; 
                count++;
            }
            else{
                st++;
                end++;
            }
        }
         return count;    
         
            
    }
};


