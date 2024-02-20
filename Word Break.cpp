int solve(int index, string s, vector<string> &dictionary,vector<int>&dp){
        if(index>=s.size()){
            return 1;
        }
        if(dp[index]!=0){
            return dp[index];
        }
        int ans = 0;
        for(auto it:dictionary){
            if(it==s.substr(index,it.size())){
                ans = solve(index+it.size(),s,dictionary,dp);
                dp[index]=max(ans,dp[index]);
            }
        }
        return dp[index];
    }
    
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        vector<int>dp(s.size(),0);
        return solve(0,s,dictionary,dp);
    }
