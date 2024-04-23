int firstElement(int n) {
        // code here
        const int mod = 1000000007;
        if(n<=1) return 1;
        int a=0, b=1, c;
        for(int i=2;i<=n;i++){
            c=(a+b)%mod;
            a=b%mod;
            b=c%mod;
        }
        return b%mod;
    }
