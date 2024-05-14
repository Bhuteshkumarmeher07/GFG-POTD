int MinimumEffort(int rows, int cols, vector<vector<int>> &heights) {
        set<pair<int,pair<int,int>>> st;
        vector<vector<int>> efforts(rows,vector<int>(cols,INT_MAX));
        int X[] = {-1,0,1,0};
        int Y[] = {0,-1,0,1};
        
        st.insert({0,{0,0}});
        efforts[0][0] = 0;
        
        while(st.size()!=0)
        {
            auto it = *(st.begin());
            
            int x = it.second.first;
            int y = it.second.second;
            int curr_effort = it.first;
            
            st.erase(it);
            
            if(x == rows-1 and y == cols-1) return curr_effort;
            
            for(int i=0; i<4; i++)
            {
                int newX = x+X[i];
                int newY = y+Y[i];
                
                if(newX >=0 and newY >=0 and newX < rows and newY < cols)
                {
                    int new_effort = max(curr_effort,abs(heights[newX][newY]-heights[x][y]));
                    if(new_effort < efforts[newX][newY])
                    {
                        if(efforts[newX][newY] != INT_MAX)
                            st.erase({efforts[newX][newY],{newX,newY}});
                            
                        st.insert({new_effort,{newX,newY}});
                        efforts[newX][newY] = new_effort;
                    }
                }
            }
        }
        return -1;
    }
