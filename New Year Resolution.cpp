bool f(int ind,int sum,int coins[],vector<vector<int>>&dp,int n) {
        
        if(ind == n) {
            
            if((sum % 20 == 0 || sum % 24 == 0 || sum == 2024) && sum != 0) {
                
                return true;
                
            }
            
            return false;
            
        }
        
        if(dp[ind][sum] != -1) return dp[ind][sum];
        
        int not_take = f(ind+1,sum,coins,dp,n);
        
        int take = f(ind+1,coins[ind] + sum,coins,dp,n);
        
        return dp[ind][sum] = (not_take || take);
        
    }
    
    int isPossible(int N , int coins[]) 
    {
        
       vector<vector<int>>dp(N+1,vector<int>(2024,-1));
       
       return f(0,0,coins,dp,N);
       
    }
