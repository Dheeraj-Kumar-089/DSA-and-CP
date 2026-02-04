class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int n = nums.size();
            vector<int> ans;
    
            if (nums.empty()) { // Ensure nums is not empty
                return {-1, -1};
            }
    
            auto lb = lower_bound(nums.begin(), nums.end(), target);
            if (lb == nums.end() || *lb != target) { // Check if target exists
                return {-1, -1};
            }
    
            int index1 = std::distance(nums.begin(), lb);
    
            auto ub = upper_bound(nums.begin(), nums.end(), target);
            int index2 = std::distance(nums.begin(), ub) -
                         1; // Ensure last occurrence is correct
    
            ans.push_back(index1);
            ans.push_back(index2);
    
            return ans;
        }
    };

    #include <bits/stdc++.h>
    using namespace std;  
    int main(){

    }