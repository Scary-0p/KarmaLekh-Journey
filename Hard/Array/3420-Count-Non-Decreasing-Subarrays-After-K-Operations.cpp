            }
            starts.push_front(l);
            while (water > k) {  // the right end leaves with its water
                water -= nums[starts.back()] - nums[r];
                if (starts.back() == r)
                    starts.pop_back();
                --r;
            }
            ans += r - l + 1;
        }
        return ans;
    }
