    int setSetBit(int x, int y, int l, int r){
        // code here
        for(int i=l-1; i<r; i++)
        {
            x = x | (y & (1 << i));
        }
        return x;
    }
