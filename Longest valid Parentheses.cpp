    int maxLength(string& str) {
        // code here
        int cntOp = 0, op=0, cl=0, cntCl=0;
        for(int i=0; i<str.length(); i++){
            if(str[i] == '(') op++;
            else cl++;
            if(cl > op) cl=op=0;
            if(cl==op) cntOp = max(cntOp, op*2);
        }
        op=cl=0;
        for(int i=str.length()-1; i>=0; i--){
            if(str[i] == '(') op++;
            else cl++;
            if(op > cl) op=cl=0;
            if(op==cl) cntCl = max(cntCl, op*2);
        }
        return max(cntOp, cntCl);
    }
