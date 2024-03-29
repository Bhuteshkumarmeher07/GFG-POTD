    int minDist(int a[], int n, int x, int y) {
        // code here
        int x_position = -1;
        int y_position = -1;
        int ans = -1;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                x_position = i;
            }
            if(a[i]==y){
                y_position = i;
            }
            
            if(x_position!=-1 && y_position!=-1)
            {
                int val = abs(y_position - x_position);
                if(ans == -1) 
                    ans = val;
                else
                {
                    ans = min(ans,val);
                }
            }
        }
        return ans;
    }
