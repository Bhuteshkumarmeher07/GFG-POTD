long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int i=0;
        int j=0;
        long sum=0;
        long maxi=LONG_MIN;
        while(j<N){
            sum+=Arr[j];
            if(j-i+1<K){
                j++;
            }
            else if(j-i+1==K){
                maxi=max(maxi,sum);
                j++;
                
                
            }
            else{
                sum-=Arr[i];
                maxi=max(maxi,sum);
                
                i++;
                j++;
            }
            
        }
        return maxi;
        
    }
