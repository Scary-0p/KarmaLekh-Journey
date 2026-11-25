        }

        auto found = [&](int length) {  // is some window of this length unique?
            int k = bit_width((unsigned)length) - 1;  // its first 2^k elements and its last 
            2^k cover it
            unordered_map<long long, int> count;
            for (auto [a, b] : views::zip(names[k], names[k] | views::drop(length - (1 << k))))
                count[(long long)a << 32 | b]++;
            return ranges::any_of(count, [](auto& entry) { return entry.second == 1; });
        };

        return *ranges::partition_point(views::iota(1, n), not_fn(found));
