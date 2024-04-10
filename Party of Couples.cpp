int findSingle(int n, int arr[]){
        // code here
        int N=0;
        for(int i=0;i<n;i++){
            N=N^arr[i];
        }
        return N;
    }
