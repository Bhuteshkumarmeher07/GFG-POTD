    int countBuildings(vector<int> &height) {
        // code here
        int n = height.size();
        int maxi = INT_MIN;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(height[i] > maxi){
                cnt++;
                maxi = max(maxi, height[i]);
            }
        }
        
        return cnt;
    }
