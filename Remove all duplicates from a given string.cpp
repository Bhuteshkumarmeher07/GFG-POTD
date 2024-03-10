string removeDuplicates(string str) {
	    // code here
	    string ans = "";
	    unordered_map<char, int> freq;
	    int n = str.length();
	    
	    for(int i=0; i<n; i++) {
	        freq[str[i]]++;
	        if(freq[str[i]] <= 1)
	            ans += str[i];
	    }
	    
	    return ans;
	}
