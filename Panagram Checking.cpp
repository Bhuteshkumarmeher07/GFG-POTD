bool checkPangram (string s) {
        // your code here
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            if(s[i]-'a'>=0){
                arr[s[i]-'a']=1;
            }
            else{
                arr[s[i]-'A']=1;
            }
        }
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                return false;
            }
        }
        return true;
    }
