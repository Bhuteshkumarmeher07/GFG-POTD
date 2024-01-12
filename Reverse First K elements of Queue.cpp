    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int> st;
        int n = q.size();
        
        // // Edge case
        // if(k > n || k == 0){
        //     return;
        // }
        // Step 1: Push first k element into stack
        for(int i = 0; i<k; i++)
        {
            st.push(q.front());
            q.pop();
        }
        // Step 2: Push k element from stack to queue
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        // Step 3: 
        for(int i=k; i<n; i++)
        {
            q.push(q.front());
            q.pop();
        }
        return q;
    }
