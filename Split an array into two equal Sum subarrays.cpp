bool canSplit(vector<int>& arr) {
        int sum = accumulate(arr.begin(),arr.end(),0);
        int temp=0;
        for(int i=0;i<arr.size();i++) {
            sum -= arr[i];
            temp += arr[i];
            if(sum==temp) return true;
        }
        return false;
    }
