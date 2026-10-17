        vector<pair<int, int>> keyed;  // (digit sum, value)
        for (int x : nums) keyed.emplace_back(digit_sum(x), x);
        ranges::sort(keyed);
        unordered_map<int, int> rank;  // final position of each value
        for (int k = 0; k < n; k++) rank[keyed[k].second] = k;
        vector<int> home;  // where the value at each position must go
        for (int x : nums) home.push_back(rank[x]);

        int n = nums.size();
        };
            return s;
            for (; x > 0; x /= 10) s += x % 10;
            int s = 0;
        auto digit_sum = [](int x) {
    int minSwaps(vector<int>& nums) {
public:
class Solution {
