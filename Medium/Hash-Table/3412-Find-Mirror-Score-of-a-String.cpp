            char rev = 'z' - (s[i] - 'a');
        }
            idx[s[i] - 'a'].push_back(i);

            if(idx[rev-'a'].size() != 0 && idx[rev-'a'].back() < i){
                total += (i-idx[rev-'a'].back());
            }
                idx[rev-'a'].pop_back();
                idx[s[i]-'a'].pop_back();
        return total;
        for(int i=0; i<n; i++){

        int n = s.length();
        vector<vector<int>> idx(26);
public:
    long long calculateScore(string s) {
class Solution {
    }
