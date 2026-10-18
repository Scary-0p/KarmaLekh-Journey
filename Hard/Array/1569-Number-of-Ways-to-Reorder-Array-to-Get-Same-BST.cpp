        vector<int> stack = {0};  // values with increasing insertion times
        for (int v = 1; v <= n + 1; ++v) {
            while (born[stack.back()] > born[v]) {  // v is the right wall of the value on top
                stack.pop_back();
                sizes = sizes * (v - stack.back() - 1) % MOD;  // and the value below it is the left wall
            }
            stack.push_back(v);
        for (int k = 2; k <= n; ++k) fact = fact * k % MOD;
        vector<int> born(n + 2, -1);  // insertion time of each value; the walls 0 and n + 1 come before everything
        for (int i = 0; i < n; ++i) born[nums[i]] = i;

        long long fact = 1, sizes = 1;  // n! and the product of subtree sizes, mod p
class Solution {
public:
    int numOfWays(vector<int>& nums) {
         const long long MOD = 1e9 + 7;
        int n = nums.size();
