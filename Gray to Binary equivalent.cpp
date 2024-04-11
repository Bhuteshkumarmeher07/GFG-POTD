    int solve(int& n){
        if(n==0 || n==1){
             return n;
        }
        
        int d=n%2;
        n=n/2;
        int a=solve(n);
        
        int ans=a^d;
        n=n*2+ans;
        return ans;
    }
    public:
    int grayToBinary(int n)
    {
        
        int ans=solve(n);
        //cout<<n<<endl;
        return n;
    }
