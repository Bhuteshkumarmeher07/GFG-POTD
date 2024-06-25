vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        while(k>mat[0].size()){
            k -= mat[0].size();
        }
        
        if(k == 0 || k == mat[0].size()){
            return mat;
        }
        
        for(int i =0;i<mat.size();i++){
            int m = mat[i].size();
            reverse(mat[i].begin() , mat[i].begin() + k);
            reverse(mat[i].begin()+k , mat[i].end());
            reverse(mat[i].begin(),mat[i].end());
        }
        return mat;
    }
