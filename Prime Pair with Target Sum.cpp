int check(int num)
    {
        for(int i = 2; i<=sqrt(num); i++)
        {
          if(num%i == 0) 
          return 0 ; 
        }
      return 1 ; 
    }
    vector<int> getPrimes(int n) {
        // code here
         vector<int>ans;
         ans.push_back(-1);
         ans.push_back(-1);
         
        if(n<4)
        {
            return ans;
        }
        
       for(int i=2; i<=n/2; i++)
       {
           if(check(i) == 1 && check(n-i) == 1)
           {
               ans[0] = (i);
               ans[1]=(n-i);
               break;
           }
       }
        
        return ans;
