vector<int> findMissing(int a[], int b[], int n, int m) 
    { 
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<m;i++){
            
            mp[b[i]]++;
           
        }
        for(int i=0;i<n;i++)
        
        {
           // if(mp.find(a[i])==mp.end()){
           //     ans.push_back(a[i]);
           // }
           if(mp[a[i]]<=0)
           {
               ans.push_back(a[i]);
           }
        }
        return ans;
    } 
