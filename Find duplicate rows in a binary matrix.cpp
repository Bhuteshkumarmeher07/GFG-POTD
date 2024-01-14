vector<int> repeatedRows(vector<vector<int>> &matrix, int m, int n) 
    { 
        // Your code here
      map<vector<int> , vector<int>>mp ;
      for(int i=0;i<m;i++){
          vector <int>store ;
          for(int j=0;j<n;j++){
              store.push_back(matrix[i][j]) ;
          }
          mp[store].push_back(i) ;
      }
      vector<int>ans ;
      for(auto it:mp){
          if(it.second.size()>1){
              for(int i=1;i<it.second.size();i++){
                  ans.push_back(it.second[i]) ;
              }
          }
      }
      sort(ans.begin() , ans.end()) ;
      return ans ;
    } 
