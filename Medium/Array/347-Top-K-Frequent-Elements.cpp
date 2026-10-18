        sort(uniqueNums.begin(), uniqueNums.end(),
             [&](int a, int b) {
                 if (mp[a] != mp[b]) {
                     return mp[a] > mp[b];
                 }
                 return a < b;
             });

        // Step 4: Take the first k elements
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(uniqueNums[i]);
        }

        // Step 3: Sort by frequency

        }
            uniqueNums.push_back(entry.first);
        for (auto& entry : mp) {
