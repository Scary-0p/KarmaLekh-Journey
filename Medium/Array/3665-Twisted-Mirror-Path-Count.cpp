        }
        else{
            dp[i][j][dir] = dfs(i, j+1, 0) + dfs(i+1, j, 1);
        }
        return dp[i][j][dir];
    }

    int uniquePaths(vector<vector<int>>& grid) {
        this->nums = grid;
        row = nums.size(), col = nums[0].size();
        dp.assign(row, vector<vector<long long int>>(col, vector<long long int>(2, -1)));
        return dfs(0,0,0);
    }
};
