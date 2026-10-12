        // Step 1: count the 1-bits in every bit position
        for (int x : nums)
            for (int i = 0; i < 30; i++)
                if (x & (1 << i)) b[i]++;

        // Step 2: build k numbers, each takes one 1-bit from every position that still has one
        while (k-- > 0) {
            long long x = 0;
            for (int i = 0; i < 30; i++)
                if (b[i] > 0) {
                    x |= 1LL << i;
                    b[i]--;
                }
            ans = (ans + x * x) % mod;
        }

        return (int)ans;
    }
