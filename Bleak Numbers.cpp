int counting_bits(int n)
    {
        int set = 0;
        while(n)
        {
            if( (n & 1) == 1) set++;
            n>>=1;
        }
        return set;
    }
        
    int is_bleak(int n)
    {
        int useful_bits = ceil(log2(n));
        for(int i=n-1; i>= n - useful_bits; i--)
        {
            if(i + counting_bits(i) == n) return 0;
        }
        return 1;
    }
