//! Leetcode - 46 :- Permutations

//* Method - 1
//? TC - O(N * N!)
//? SC - O(N!)

class Solution {
    public:
    
        void permutations(vector<int>& nums,int idx, vector<vector<int>>&  ans)
        {
            if(idx >= nums.size()){
                ans.push_back(nums);
                return;
            }
    
            for(int i=idx;i<nums.size();i++)
            {
                swap(nums[idx],nums[i]);
                permutations(nums,idx+1,ans);
                swap(nums[idx],nums[i]);
            }
        }
    
        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> ans;
            permutations(nums,0,ans);
            return ans;
        }
};