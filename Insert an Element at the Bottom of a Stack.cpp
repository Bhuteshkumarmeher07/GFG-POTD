stack<int> insertAtBottom(stack<int>& st,int x){
        if(st.empty()){
            st.push(x);
            return st;
        }
        
        int c = st.top();
        st.pop();
        insertAtBottom(st,x);
        st.push(c);
        return st;
    }
