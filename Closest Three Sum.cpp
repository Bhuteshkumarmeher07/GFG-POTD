int threeSumClosest(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int ans = INT_MIN;
        int n = arr.size();
        int diff = INT_MAX;
        
        for (int i = 0; i < n - 2; i++) {
            int st = i + 1;
            int end = n - 1;
            while (st < end) {
                int sum = arr[i] + arr[st] + arr[end];
                int current_diff = abs(sum - target);
                

                if (current_diff <diff) {
                    diff = current_diff;
                    ans = sum;
                  
                }
                else if(current_diff <=diff){
                      ans = max(ans,sum);
                }

                if (sum < target) {
                    st++;
                } else if (sum > target) {
                    end--;
                } else {
                    return target; 
                }
            }
        }

        return ans;
    }
