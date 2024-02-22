class Solution
{
    public:
    const int Mod = 1e9 + 7;
    
    // Memoization
    int solve(int i, int j, string& s, string& t, vector<vector<int>>& dp) {
        if(j >= t.length()) {
            return 1;
        }
        if(i >= s.length()) {
            return 0;
        }
        if(dp[i][j] != -1) {
            return dp[i][j];
        }
        
        int ans = 0;
        if(s[i] == t[j]) {
            ans = (ans % Mod + solve(i+1, j+1, s, t, dp) % Mod) % Mod;
        }
        ans = ans % Mod + solve(i+1, j, s, t, dp) % Mod;
        
        return dp[i][j] = ans % Mod;
    }
    int subsequenceCount(string s, string t)
    {
        vector<vector<int>> dp(s.length(), vector<int> (t.length(), -1));
        return solve(0, 0, s, t, dp);
        
        // return solveTab(s, t);
        
        // return spaceOptimised(s, t);
    }
