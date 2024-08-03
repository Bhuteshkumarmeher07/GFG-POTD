int celebrity(vector<vector<int> >& mat) {
        // code here
        int ans = -1;
        int j=0;
        int n = mat.size();
        for(int i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(mat[i][j]) break;
            }
            if(j==n){
                for(j=0; j<n; j++){
                    if(j != i && mat[j][i] == 0) break;
                }
                if(j == n) ans=i;
                break;
            }
        }
        return ans;
    }
};
