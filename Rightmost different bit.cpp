    int posOfRightMostDiffBit(int m, int n)
    {
        if(m==n) return -1;
            int ans = m^n;
           
            for(int i=0;i<n;i++){
               if(ans&(1<<i)) {
                   return i+1;
               }
            }
        
    return -1;
    }
