class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = 0;
        for(auto c : nums){
            curr_sum = max(c, curr_sum + c);
        return max_sum;
    }
        }
            max_sum = max(max_sum, curr_sum);
};
