	int sumOfPowers(int a, int b){
        int ans = 0;
        for(int i = a; i <= b; i++)
        {
            int val = i;
            for(int j = 2; j * j <= i; j++)
            {
                while(val % j == 0)
                {
                    ans++;
                    val /= j;
                }
            }
            if(val > 1)ans++;
        }
        return ans;
	}
