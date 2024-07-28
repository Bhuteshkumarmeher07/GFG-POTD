string removeDups(string str) {
        // Your code goes here
        int arr[26] = {0};
        string st;
        for(auto it:str){
            if(arr[it-'a']){
                continue;
            }
            st+=it;
            arr[it-'a']++;
        }
        return st;
    }
