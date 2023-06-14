class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue <int> q;
        
        for(int i = 0; i<N; i++){
            q.push(A[i]);
        }
        
        long long ans = 0;
        
        while(K--){
            int top = q.top();
            q.pop();
            ans = ans + top;
            q.push(top/2);
        }
        return ans;
    }
};
