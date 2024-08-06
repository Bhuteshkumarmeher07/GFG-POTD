bool check (string s){
        if(s[0]=='0' && s.length()!=1)return false;
        int k=stoi(s);
        if(k<0 || k>255)return false;
        return true;
    }
    int isValid(string str) {
        string t1="";
        int count=0;
       for(int i=0;i<str.length();i++){
           if(i!=str.length()-1 && str[i]=='.' && str[i+1]=='.')return false;
           if(str[i]!='.')t1+=str[i];
           else{
               count++;
               if(!check(t1))return 0;
               t1="";
           }
       }
       if(count!=3)return 0;
       return check(t1);
    }
