bool isRotated(string str1, string str2)
    {
        string r1;
        for(int i=2;i<str1.size();i++){
            r1+=str1[i];
        }
        r1+=str1[0];
        r1+=str1[1];
        string r2;
         int n=str1.size();
         r2+=str1[n-2];
         r2+=str1[n-1];
        for(int i=0;i<str1.size()-2;i++){
            r2+=str1[i];
        }
        if(str2==r1 || str2==r2){
            return true;
        }
        return false;
       
    }
