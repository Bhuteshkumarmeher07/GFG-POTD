int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int dx[4] = {1,-1,0,0},dy[4] = {0,0,1,-1};
        int ans = 0;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                if(!matrix[i][j]){
                    for(int k = 0;k<4;k++){
                        int nx = dx[k]+i,ny = dy[k]+j;
                        if(nx>=0 && nx< matrix.size() && ny>=0 && ny<matrix[0].size() && matrix[nx][ny]){
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
