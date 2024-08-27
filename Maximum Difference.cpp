vector<int> NSERF(vector<int>&arr){
        int n=arr.size();
        vector<int>v(n);
        stack<int>st;
        st.push(0);
        for(int i=n-1;i>=0;i--){
            int curr=arr[i];
            while(st.top()>=curr){
                st.pop();
            }
            v[i]=st.top();
            st.push(curr);
        }
        return v;
    }
    vector<int> NSELF(vector<int>&arr){
        int n=arr.size();
        vector<int>v(n);
        stack<int>st;
        st.push(0);
        for(int i=0;i<n;i++){
            int curr=arr[i];
            while(st.top()>=curr){
                st.pop();
            }
            v[i]=st.top();
            st.push(curr);
        }
        return v;
    }
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        vector<int>NSEL=NSELF(arr);
        vector<int>NSER=NSERF(arr);
        
        int maxi=0;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,abs(NSEL[i]-NSER[i]));
        }
        return maxi;
    }
