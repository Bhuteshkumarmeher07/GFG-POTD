int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        int result = -1;
        auto maxSum = 0;
        for (int i = 0; i < N; i++)
        {
            auto sum = 0;
            for (int j = 0; j < N; j++)
            {
                if (arr[j][i] == 0)
                {
                    sum += 1;
                }
            }
            
            if (sum > 0 && sum > maxSum)
            {
                maxSum = sum;
                result = i;
            }
        }
        
        return result;
    }
