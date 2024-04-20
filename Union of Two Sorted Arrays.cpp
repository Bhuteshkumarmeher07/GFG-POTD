vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        set<int>s1;
        for(int i=0;i<n;i++){
            s1.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            s1.insert(arr2[i]);
        }
        vector<int>ans;
        for(auto i:s1){
            ans.push_back(i);
        }

        return ans;
        //return vector with correct order of elements
    }
