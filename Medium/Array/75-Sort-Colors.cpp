        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) freq0++;
            else if(nums[i] == 1) freq1++;
            else freq2++;
        }
        for(int i=0; i<nums.size(); i++){
            if(i < freq0) nums[i] = 0;
            else if(i < (freq1+freq0-1)) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};
        int freq0 = 0, freq1 = 1, freq2 = 0;
    void sortColors(vector<int>& nums) {
public:
class Solution {
