int solve(int n, int x, int y, int z, int sum, vector<int>&dp){
        if(sum == n) return 0;
        if(sum > n) return INT_MIN;
        if(dp[sum] != -1) return dp[sum];
        
        int one = solve(n,x,y,z,sum+x,dp);
        int two = solve(n,x,y,z,sum+y,dp);
        int three = solve(n,x,y,z,sum+z,dp);
        
        return dp[sum] = 1 + max(one, max(two,three));
    }
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int> dp(n+1, -1);
        int ans = solve(n,x,y,z,0,dp);
        if(ans < 0) return 0;
        return ans;
    }
