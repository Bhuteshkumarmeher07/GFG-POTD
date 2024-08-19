int kthSmallest(vector<int> &arr, int k) {
        // code here
        int maxi = -1;
        for(auto &it : arr) {
            maxi = max(maxi, it);
        }
        vector<int> hash(maxi + 1, 0);
        for(int i = 0; i < arr.size(); i++) {
            hash[arr[i]]++;
        }
        
        int currPosCnt = 0;
        for(int i = 0; i < hash.size(); i++) {
            if(hash[i]) {
                if(currPosCnt + hash[i] >= k) return i;
                currPosCnt += hash[i];
            }
        }
        return -1;
    }
