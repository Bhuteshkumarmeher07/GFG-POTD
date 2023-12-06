    int countX(int L, int R, int X) {
        int count = 0;
        for(int i=L+1; i<R; i++){
            int let = i;
            while(let != 0){
                int num = let%10;
                let=let/10;
                if(num == X){
                    count++;
                }
            }
        }
        return count;
    }
