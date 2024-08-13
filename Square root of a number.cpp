long long int floorSqrt(long long int n) {
        // Your code goes here
        int low = 0, high = n;
        while(low <= high){
            long long mid = (low + high) / 2;
            long long val = mid*mid;
            if(val <= (long long)(n)){
                // eliminate the left halv
                low = mid + 1;
            }
            // right halv
            else{
                high = mid - 1;
            }
        }
        return high;
    }
