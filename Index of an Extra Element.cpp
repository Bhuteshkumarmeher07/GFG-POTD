int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        int left;
        int right = n-1;
        while(left <= right){
            int mid = left + (right-left) / 2;
            
            if(arr1[mid] == arr2[mid]){
                left = mid + 1;
            }
            else if(arr1[mid] != arr2[mid]){
                right = mid - 1;
            }
        }
        return left;
