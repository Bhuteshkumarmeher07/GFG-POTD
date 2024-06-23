vector<int> bracketNumbers(string str) {
        // Your code goes here
        int open = 1;
        stack<int>st;
        vector<int>vec;
        for(auto it:str){
            if(it != '(' && it != ')')continue;
            if(it == '('){
                st.push(open);
                vec.push_back(open);
                open++;
            }  else {
                if(st.size()){
                     vec.push_back(st.top());
                     st.pop();   
                }
            }
        }
        return vec;
    }
