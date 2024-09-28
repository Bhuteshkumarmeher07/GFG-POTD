int dp[1000001];
    int minimalCostRecursion(int index, int k, vector<int> &arr){
        if(index==arr.size()-1){
            return 0;
        }
        
        int minCost = INT_MAX;
        
        if(dp[index] != -1){
            return dp[index];
        }
        for(int i=1; i<=k; i++){
            if(index+i < arr.size()){
                int jumpCost = abs(arr[index]-arr[index+i]) + minimalCostRecursion(index+i, k, arr);
                minCost = min(minCost, jumpCost);
            }
        }
        return dp[index] = minCost;
    }
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        memset(dp, -1, sizeof(dp));
        return minimalCostRecursion(0, k, arr);
    }
