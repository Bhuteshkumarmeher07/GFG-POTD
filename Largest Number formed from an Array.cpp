static bool compare(string &a,string &b){
    
        return a+b>b+a;
    
    }
    string printLargest(int n, vector<string> &arr) {
        
        sort(arr.begin(),arr.end(),compare);
        
        string ans="";
        for(auto x:arr)
        ans+=x;
        return ans;
    }
