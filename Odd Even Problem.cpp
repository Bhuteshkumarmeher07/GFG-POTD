string oddEven(string s) {
        // code here
        unordered_map<char, int> mpp;
        
        for(char ch: s){
            mpp[ch]++;
        }
        int x = 0;
        int y = 0;
        
        for(auto it:mpp){
            char ch = it.first;
            int freq = it.second;
            
            int pos = ch-96; // ascii
            if(freq % 2 == 0 && pos % 2 == 0){
                x++;
            }
            else if(freq % 2 != 0 && pos % 2 != 0){
                y++;
            }
        }    
        
        int sum = x + y;
        if(sum % 2 == 0) return "EVEN";
        else return "ODD";
        
    }
