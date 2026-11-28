        affordable
            auto [price, factor] = heap.top();
            heap.pop();
            if (deals[factor] < 0)  // from -1: the item itself is not a deal
                for (int multiple = factor; multiple <= n; multiple += factor)
                    deals[factor] += have[multiple];
            int pairs = min(deals[factor], budget / price);
            copies += 2 * pairs;
            budget -= pairs * price;
        }
        return copies + budget / cheapest;
    }
