        vector<vector<int>> dp(n + 1, vector<int>(k + 1, INF));
        dp[0][0] = 0;
        for (int i = 1; i <= n; ++i) {
            for (int p = 1; p <= k; ++p) {
                for (int prev = 0; prev <= i - 2; ++prev) {
                    if (dp[prev][p - 1] != INF && cost[prev][i - 1] != INF)
                        dp[i][p] = min(dp[i][p], dp[prev][p - 1] + cost[prev][i - 1]);
                }
            }
        }
        return dp[n][k];
    }
