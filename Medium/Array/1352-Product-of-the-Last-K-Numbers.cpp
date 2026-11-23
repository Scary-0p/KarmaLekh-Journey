            before it
        else
            prefix.push_back(prefix.back() * num);
    }

    int getProduct(int k) {
        int n = prefix.size();
        if (k >= n)  // the window reaches back to a zero
            return 0;
        return prefix[n - 1] / prefix[n - 1 - k];
    }
};
