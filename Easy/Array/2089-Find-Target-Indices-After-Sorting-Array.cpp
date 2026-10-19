class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        int i=0;
        while(nums[i] <= target && i < nums.size()){
                ans.push_back(i);
            }
    }
            i++;
        return ans;
        }
            if(nums[i] == target){
};
