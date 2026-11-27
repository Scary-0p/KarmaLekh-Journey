            int f = it[0], p = it[1];
            vector<int> ndp = dp;
            for (int b = budget; b >= p; --b) {
                ndp[b] = max(ndp[b], dp[b - p] + mult[f]);
            }
            for (int b = p; b <= budget; ++b) {
                ndp[b] = max(ndp[b], ndp[b - p] + 1);
            }
            dp = move(ndp);
        }
        return *max_element(dp.begin(), dp.end());
    }
