vector<vector<vector<int>>> dp;
        
        int lcs(string a, string b, string c, int i, int j, int k){
            if(i<0 || j<0 || k<0) return 0;
            if(dp[i][j][k] != -1) return dp[i][j][k];
            
            int ans = 0;
            ans = max(ans, lcs(a, b, c, i-1, j-1, k-1) + (a[i]==b[j] && a[i]==c[k]));
            ans = max(ans, lcs(a, b, c, i-1, j, k));
            ans = max(ans, lcs(a, b, c, i, j-1, k));
            ans = max(ans, lcs(a, b, c, i, j, k-1));
            
            return dp[i][j][k] = ans;
        }

        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            dp = vector<vector<vector<int>>>(n1+1, vector<vector<int>>(n2, vector<int>(n3, -1)));
            return lcs(A, B, C, n1-1, n2-1, n3-1);
        }
