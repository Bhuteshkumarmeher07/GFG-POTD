long long sumOfDivisors(int N)
    {
        long long ans=0;
        for(int i=1;i<=N;i++)
        ans+=(N/i)*i;
        return ans;
    }
