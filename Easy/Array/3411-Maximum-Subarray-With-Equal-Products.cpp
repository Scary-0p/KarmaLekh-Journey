                    prod *= nums[k];
                    if (prod > LIMIT) { ok = false; break; }
                    g = gcd(g, (long long) nums[k]);
                    l = lcm(l, (long long) nums[k]);
                }

                if (ok && prod == g * l) ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
