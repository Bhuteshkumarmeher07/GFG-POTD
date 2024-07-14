void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int zero = 0, one = n-1;
        while(zero < one){
            if(arr[zero] == 1){
                swap(arr[zero], arr[one]);
                one--;
            }
            else{
                zero++;
            }
        }
    }
