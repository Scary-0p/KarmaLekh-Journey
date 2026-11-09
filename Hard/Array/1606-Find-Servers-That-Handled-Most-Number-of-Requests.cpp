            int x = free.top() % k;
            free.pop();
            busy.push({arrival[i] + load[i], x});
            ++handled[x];
        }

        int most = ranges::max(handled);
        vector<int> ans;
        for (int x = 0; x < k; ++x)
            if (handled[x] == most) ans.push_back(x);
        return ans; 
    }
