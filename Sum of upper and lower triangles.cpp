class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int sum1 = 0 , sum2 = 0;
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                
                if(i == j){
                    sum1 += matrix[i][j];
                    sum2 += matrix[i][j];
                }
                
                if(j > i){
                    sum1 += matrix[i][j];
                }
                
                if(i > j){
                    sum2 += matrix[i][j];
                }
                
            }
            
        }
        vector<int> ans;
        ans.push_back(sum1);
        ans.push_back(sum2);
        return ans;
    }
