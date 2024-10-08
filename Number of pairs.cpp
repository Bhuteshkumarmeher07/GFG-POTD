long long countPairs(vector<int> &arr, vector<int> &brr) 
    {
        vector<double> a(arr.size()), b(brr.size());
        
        for(int i = 0; i<arr.size(); i++)
        a[i] = (double)log(arr[i]) / (double)arr[i];
    
        for(int i = 0; i<brr.size(); i++)   
        b[i] = (double)log(brr[i]) / (double)brr[i];
            
        sort(a.begin(), a.end(), greater<double>());
        sort(b.begin(), b.end(), greater<double>());
    
        int i = 0, j = 0, n = a.size(), m = b.size();
        long long x = 0;
    
        while(i<n && j < m)
        {
            if(a[i] > b[j])
            {
                x += (m-j);
                i++;
            }
            else
                j++;
        }
        return x;
        
    }
