vector<long long int> productExceptSelf(vector<long long int>& nums) {
        vector<long long int>ans;
        long long int sum=1;
        int temp=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                temp++;
                if(temp>1)break;
            }
        }
        for(int i=0;i<n;i++)if(nums[i]!=0)sum*=nums[i];
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                if(temp>=1)ans.push_back(0);
                else{
                    ans.push_back(sum/(long long int)nums[i]);
                }
            }
            else{
                if(temp>1)ans.push_back(0);
                else ans.push_back(sum);
            }
        }
        return ans;
    }
