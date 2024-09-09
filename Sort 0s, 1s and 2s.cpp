void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        int low = 0, mid = 0, high = n-1;
        // 0 ... low - 1 => 0's
        // low .. mid - 1 => 1's
        // mid .. high => unsorted
        // high + 1 .. n => 2
        while(mid <= high){
            
            if(arr[mid] == 0){
                swap(arr[low], arr[mid]);
                low++; 
                mid++;
            }
            
            else if(arr[mid] == 1){
                mid++;
            }
            
            else{
                swap(arr[mid], arr[high]);
                high--;
            }
            
        }
