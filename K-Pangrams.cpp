bool kPangram(string str, int k) {
        // code here
        vector<int> arr(26, 0);
        int n = str.size();
        int ch = 0;
        for(int i=0; i<n; i++){
            if(str[i] != ' '){
                arr[str[i] - 'a'] = 1;
                ch++;
            }
        }
        int cnt = 0;
        for(int i=0; i<26; i++){
            if(arr[i] == 0){
                cnt++;
            }
        }
        if(ch<26 || cnt > k) return false;
        return true;
    }
