    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        for(int i=0; i<n; i++)
        {
            while(arr[i] >= 1 and arr[i] <= n and arr[i] != arr[arr[i] - 1])
            {
                // swap(arr[i], arr[arr[i] - 1]);
                int t = arr[arr[i] - 1];
                arr[arr[i] - 1] = arr[i];
                arr[i] = t;
            }
        }    
        for(int i = 0; i < n; i++)
        {
            if(arr[i] != i+1)
            {
                return i + 1;
            }
        }
        return n+1;
    }
