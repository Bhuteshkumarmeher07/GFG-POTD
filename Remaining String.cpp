string printString(string s, char ch, int count) {
        // Your code goes here
        string res="";
        int val =0;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch && count>0){
                count--;
            }else if(count==0){
               res=res+s[i]; 
            }
           
        }

        return res;
    }
