// User function Template for C++

class Solution {
  public:
    int rectanglesInCircle(int r) {
        int count =0;
        int d=2*r;
        int area=int (3.14*r*r);
        int max=d-1;

        for(int i=1;i<=max;i++){
            for(int j=1;j<=max;j++){
            if(i*j<=area && (pow(d,2)>=(pow(i,2)+pow(j,2)))){
                count++;
            }
        }
        }
        return count;
    }
};
