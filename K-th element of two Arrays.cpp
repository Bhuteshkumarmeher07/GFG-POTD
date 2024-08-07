void mergesort(vector<int>& arr1, vector<int>& arr2,vector<int>&ans){
        int n=arr1.size();
        int m=arr2.size();
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                ans[k++]=arr1[i];
                i++;
            }
            else{
                ans[k++]=arr2[j];
                j++;
            }
        }
        while(i<n){
             ans[k++]=arr1[i];
            i++;
        }
        while(j<m){
            ans[k++]=arr2[j];
                j++;
        }
    }
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int n=arr1.size();
        int m=arr2.size();
        vector<int>ans(int(n+m),0);
        mergesort(arr1,arr2,ans);
        return ans[k-1];
    }
