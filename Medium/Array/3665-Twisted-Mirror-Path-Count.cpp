        return dp[i][j][dir] = ans;
    }

    int uniquePaths(vector<vector<int>>& grid) {

        nums = grid;

        row = grid.size();
        col = grid[0].size();

        dp.assign(row,
            vector<vector<long long>>(
                col, vector<long long>(2, -1)
            )
        );

        // Initial direction is right
        return dfs(0, 0, 0);
    }
