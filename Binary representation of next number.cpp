string binaryNextNumber(string s) {
        // code here.
        string output;
        int carry = 0, sum = 1;
        
        while(s.size()){
            sum = sum + (s[s.size()-1]-'0') + carry;
            carry = sum/2;
            sum = sum%2;
            output.push_back(sum+'0');
            sum = 0;
            s.pop_back();
        }
        if(carry){
            output.push_back(carry+'0');
            carry = 0;
        }
        
        while(output.size() && output[output.size()-1] == '0'){
            output.pop_back();
        }
        reverse(output.begin(), output.end());
        return output;
    }
