class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        if(sum > 9 * num) return "";
        while(num-- > 0){
            int digit = min(9, sum);
        }
    }
        string ans;
            ans += char('0' + digit);
            sum -= digit;
        return sum == 0 ? ans : "";
};
