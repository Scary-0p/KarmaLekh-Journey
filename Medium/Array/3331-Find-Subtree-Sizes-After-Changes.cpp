        dfs(0, adj, s, parent, last);

        for (int i = 1; i < n; i++)
            tree[parent[i]].push_back(i);

        ans.resize(n);
        calc(0, tree);
        return ans;
    }
};
