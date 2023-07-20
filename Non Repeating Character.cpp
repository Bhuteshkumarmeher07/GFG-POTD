    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char,int> mm;
       for(auto x:S)mm[x]++;
       for(auto x:S)if(mm[x]==1)return x;
       return '$';
    }
