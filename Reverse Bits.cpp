long long reversedBits(long long x) {
        long long ans = 0;
        int pos = 0;
        
        while(x){
            if(x&1) ans += (unsigned int)1<<(31-pos);
            pos++;
            x >>= 1;
        }
        
        return ans;
    }
