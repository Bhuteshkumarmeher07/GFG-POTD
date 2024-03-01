int peakElement(int arr[], int n)
    {
       // Your code here
       if(n == 1)
       return 0;
       
       int lb = 0;
       int ub = n-1;
       
       while(lb < ub)
       {
           int mid = lb + (ub-lb)/2;
           
           if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
           return mid;
           else if(arr[mid] < arr[mid+1] && arr[mid] > arr[mid-1])
           lb = mid+1;
           else
           ub = mid;
       }
       return lb;
    }
