void zigZag(int n, vector<int> &arr) {
        // code here
        for(int i=0; i<n-1; i++){
            // element at even index
            if(i%2 == 0){
                // check if the next element is smaller or greater
                if(arr[i] > arr[i+1]){
                    swap(arr[i], arr[i+1]);
                }
            }
            else{
                // element at odd index
                if(arr[i] < arr[i+1]){
                    swap(arr[i], arr[i+1]);
                }
            }
        }
    }
