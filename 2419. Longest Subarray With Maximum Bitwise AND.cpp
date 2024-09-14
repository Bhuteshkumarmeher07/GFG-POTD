class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxNum = 0, streak = 0, result = 0;

        for(int num : nums){
            if(num > maxNum){
                maxNum = num;
                streak = 0;
                result = 0;
            }
            if(num == maxNum){
                streak++;
            }
            else{
                streak = 0;
            }

            result = max(result, streak);
        }
        return result;
    }
};
