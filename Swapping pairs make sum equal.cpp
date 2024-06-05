int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+m);
        
        int sum1 = accumulate(a, a+n, 0);
        int sum2 = accumulate(b, b+m, 0);
        
        int diff = sum1 - sum2;
        
        if(diff % 2) return -1;
        
        diff = diff / 2;
        
        int i=0, j=0;
        // 2 pointer method
        while(i < n && j < m){
            if(a[i] - b[j] == diff) return 1;
            else if(a[i] - b[j] < diff) i++;
            else j++;
        }
        return -1;
    }
