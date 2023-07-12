    public:
    //You need to complete this fucntion
    int mod = 1000000007;
    
    long long power(int N,int R)
    {
       //Your code here
       if(R==0) return 1;
       
       long long curr_ans = power(N,R/2);
       
       long long ans = ((curr_ans%mod)*(curr_ans%mod))%mod;
       
       if(R%2 == 0) return ans;
       else return ((ans%mod) * (N%mod))%mod;
    }
