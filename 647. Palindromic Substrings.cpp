class Solution {
public:
    int expandAroundIndex(string s, int left, int right)
    {
        int count = 0;

        // jab tak match karega, tab tak count increment kardo
        // i pichhe and j aage kardo

        while(left >= 0 && right < s.length() && s[left] == s[right])
        {
            count++;
            left--;
            right++;
        }
        return count;
    }


    int countSubstrings(string s) {
        int totalCount = 0;
        int n = s.length();

        for(int center = 0; center < n; center++)
        {
            // Odd
            int OddKaAns = expandAroundIndex(s, center, center);
            totalCount = totalCount + OddKaAns;

            // Even
            int EvenKaAns = expandAroundIndex(s, center, center + 1);
            totalCount = totalCount + EvenKaAns;
        }
        return totalCount;
    }    
};
