int ways(int x, int y)
    {   
        const int mod=1e9+7;
        int dp[x+1][y+1];
        for(int i=x;i>=0;i--) dp[i][y]=1;
        for(int i=y;i>=0;i--) dp[x][i]=1;
        for(int i=x-1;i>=0;i--){
            for(int j=y-1;j>=0;j--){
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
                dp[i][j]%=mod;
            }
        }
        return dp[0][0];
    }
