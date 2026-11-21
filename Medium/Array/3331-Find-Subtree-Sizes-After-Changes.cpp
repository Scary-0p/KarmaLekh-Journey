            adj[p[i]].push_back(i);

        vector<int> last(26, -1);
        dfs(0, adj, s, p, last);

        for (int i = 1; i < n; i++)
            tree[p[i]].push_back(i);

        ans.resize(n);
        calc(0, tree);
        return ans;
    }
