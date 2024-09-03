int dp[1002][1002];

 int solve(int W,vector<int>&wt,vector<int>&val,int n){
        // base case 
        if(n==0 || W==0) return 0;
        if(dp[n][W] != -1) return dp[n][W];
        if(wt[n-1]<=W){
            return dp[n][W]=max((val[n-1]+solve(W-wt[n-1],wt,val,n-1)),solve(W,wt,val,n-1));
        }else{
            return solve(W,wt,val,n-1);
        }
    }

int knapSack(int W, vector<int>& wt, vector<int>& val) {
        int n=val.size();
        memset(dp,-1,sizeof(dp));
        return solve(W,wt,val,n);
    }