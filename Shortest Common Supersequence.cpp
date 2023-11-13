int dp[101][101];
    
    int shortestCommonSupersequence(string s, string t, int m, int n)
    {
        memset(dp, 0, sizeof(dp));
        
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(s[i-1] == t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else
                {
                    int x = dp[i-1][j];
                    int y = dp[i][j-1];
                    
                    dp[i][j] = max(x, y);
                }
            }
        }
        
        return (n+m)-dp[m][n];
    }
