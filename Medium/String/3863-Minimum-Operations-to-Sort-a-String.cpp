            if(s[i] < s[i-1]) isSorted = 0;
            mn = min(mn, s[i]);
            mx = max(mx, s[i]);
        }

        if(isSorted) return 0;
        if(n == 2) return -1;
        if(s.front() == mn || s.back() == mx)
            return 1;
        
        for(int i=1; i<n; i++){

        char mn = s[0], mx = s[0];
        bool isSorted = 1;
        int n = s.length();
    int minOperations(string s) {
public:
class Solution {
