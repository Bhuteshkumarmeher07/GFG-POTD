int rowWithMax1s(vector<vector<int> > &arr) {
        int maxonecount = -1;
        int j=arr[0].size()-1;
        for(int i = 0;i<arr.size();i++){
            while(j>=0 && arr[i][j] == 1){
                j--;
                maxonecount = i;
            }
        }
        return maxonecount;
    }
