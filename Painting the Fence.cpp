long long countWays(int n, int k){
        // code here
         long long ans=1;
        long long prev=1;
        for(int i=1;i<n;i++){
            long long temp=(k-1)*ans;
            ans=(prev+temp)%mod;
            prev=temp;
        }
        return (ans*k)%mod;
    }
