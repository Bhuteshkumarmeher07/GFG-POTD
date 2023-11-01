void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        //map to store freq of each  element
        unordered_map <int, int> freq;
        for(int i=0; i<N; i++){
           freq[arr[i]]++;
        }
        
        //storing back freq from map into arr
        for(int i=1; i<=N; i++){
            arr[i-1]=freq[i];
        }
    }
