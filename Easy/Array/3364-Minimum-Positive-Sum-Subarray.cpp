            for(int j=i+1; j<nums.size(); j++){
                if(l <= (j-i) || r >= (j-i)){
                    curr_sum += nums[j];
            curr_sum += nums[i];
                    if(curr_sum > 0){
                        min_sum = min(min_sum, curr_sum);
                    } 
                }
            }
        }
        return min_sum;
    }
