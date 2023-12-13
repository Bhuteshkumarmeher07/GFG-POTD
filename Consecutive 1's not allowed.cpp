	long countStrings(int n) {
        if(n==0) return 1l;
        if(n==1) return 2l;
        int MOD = 1000000007;
        
        long prev = 2l, prev2 = 1l;
        for(int i=2; i<=n; i++){
            long cur = (prev + prev2) % MOD;
            prev2 = prev;
            prev = cur;
        }
        
        return prev;
    }
