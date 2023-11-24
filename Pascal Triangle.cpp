vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<long long>> ans;
        ans.push_back({1});
        long long mod = 1e9+7;
        for(int i=1;i<n;i++){
            vector<long long> temp;
            temp.push_back(1);
            for(int j=0;j<ans[i-1].size()-1;j++){
                long long val = (ans[i-1][j]+ans[i-1][j+1])%mod;
                temp.push_back(val);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans[n-1];
    }
