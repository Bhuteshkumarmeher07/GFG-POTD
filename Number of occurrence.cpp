	int count(int arr[], int n, int x) {
	    // code here
	    int first = lower_bound(arr, arr+n, x) - arr;
	    int last = upper_bound(arr, arr+n, x) - arr;
	    
	    if(first == n or arr[first] != x)
	    {
	        return 0;
	    }
	    
	    return last - first;
	}
