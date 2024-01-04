    int singleElement(int arr[] ,int N) {
        map<int,int>freq;
        for(int i=0;i<N;i++){
            
                freq[arr[i]]++;
            
        }
        int ans=-1;
        map<int,int>::iterator it;
        for(it=freq.begin(); it!= freq.end();it++){
            if(it->second==1){
                ans=it->first;
            }
        }  
        return ans;
    }
