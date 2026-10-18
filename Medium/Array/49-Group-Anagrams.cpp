class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(auto s : strs){
            string word = s;
        }
        for(auto s : mp){
            sort(word.begin(), word.end());
            mp[word].push_back(s);
            ans.push_back(s.second);
        }   
    return ans;
        vector<vector<string>> ans;
    }
};
