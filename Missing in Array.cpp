    int missingNumber(int n, vector<int>& arr) {
        // Your code goes here
        // int n = arr.size();
        int xor1 = 0, xor2 = 0;
        
        for(int i=0; i<n-1; i++){
            xor1 = xor1 ^ (i+1);
            xor2 = xor2 ^ arr[i];
        }
        xor1 = xor1 ^ n;
        
        return (xor1 ^ xor2);
    }
