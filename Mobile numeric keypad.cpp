long long dp[4][3][26];
    long long fun(int r,int c,int n)
    {
        if((r==3&&c==0)||(r==3&&c==2)) return 0;
        if(n==1) return 1;
        if(dp[r][c][n]!=-1) return dp[r][c][n];
        int dr[]={0,-1,0,1,0};
        int dc[]={0,0,1,0,-1};
        long long cnt=0;
        for(int i=0;i<5;i++)
        {
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0&&nr<4&&nc>=0&&nc<3)
            {
                cnt+=fun(nr,nc,n-1);
            }
        }
        return dp[r][c][n]=cnt;
        
    }
    long long getCount(int n) {
        memset(dp,-1,sizeof(dp));
        long long ans=0;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<3;j++) ans+=fun(i,j,n);
        }
        return ans;
    }
