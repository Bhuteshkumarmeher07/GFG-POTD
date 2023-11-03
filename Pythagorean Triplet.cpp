bool checkTriplet(int arr[], int n) {
        sort(arr, arr+n);
        for(int i=2;i<n;i++){
            int start = 0;
            int end = i-1;
            while(start<end){
                if(pow(arr[start], 2) + pow(arr[end], 2) == pow(arr[i], 2)){
                    return true;
                }
                else if(pow(arr[start], 2) + pow(arr[end], 2) < pow(arr[i], 2)){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        return false;
        // code here
    }
