		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int> mm;
		    queue<char> q;
		    string ans="";
		    for(int i=0;i<A.length();i++){
		        mm[A[i]]++;
		        if(mm[A[i]]==1)q.push(A[i]);
		        while(q.size()!=0 && mm[q.front()]>1)q.pop();
		        if(q.size()==0)ans+='#';
		        else ans+=q.front();
		    }
		    return ans;
		}
