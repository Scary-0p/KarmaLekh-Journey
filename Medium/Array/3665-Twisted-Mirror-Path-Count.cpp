                dp[i][j][dir] = dfs(i, j+1, 0);
            }
        }
            dp[i][j][dir] = dfs(i, j+1, 0) + dfs(i+1, j, 1);
        }
        else{
    }
        return dp[i][j][dir];

    int uniquePaths(vector<vector<int>>& grid) {
        this->nums = nums;
    }
        row = nums.size(), m = nums[0].size();
        dp.assign(row, vector<vector<long long int>>(col, {-1, -1}));
        return dfs(0,0,0);
};
