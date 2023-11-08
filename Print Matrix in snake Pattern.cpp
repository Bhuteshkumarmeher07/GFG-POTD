vector<int> snakePattern(vector<vector<int> > matrix){   
        int n = matrix.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                ans.push_back(i&1?matrix[i][n-j-1]:matrix[i][j]);
        return ans;
    }
