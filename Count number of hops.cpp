    const int mod = 1e9+7;
    long long countWays(int n,vector<int>&dp) {
        if(n == 0 or n == 1) return 1;
 
        if(n == 2) return 2;
 
        if(dp[n] != -1) return dp[n];
 
        int ways1 = countWays(n-1, dp);
        int ways2 = countWays(n-2, dp);
        int ways3 = countWays(n-3, dp);
 
        return dp[n] = ((ways1%mod + ways2%mod)%mod + ways3%mod)%mod;
 
    }
    long long countWays(int n)
    {
        vector<int>dp(n+1,-1);
        long long ans = countWays(n,dp);
        return ans;
    }
