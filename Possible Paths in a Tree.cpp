class dsu {
    public:
    vector<int> parent;
    vector<int> size;
    //vector<int> rank;
    int n;
    dsu(int n) {
        this->n = n;
        parent.resize(n+1);
        size.resize(n+1);
       // rank.resize(n+1);
        for(int i=0;i<=n;i++) {
            parent[i] = i;
            size[i] = 1;
            //rank[i] = 0;
        }
    }
    int findparent(int x) {
        if(parent[x]==x) {
            return x;
        }
        return parent[x] = findparent(parent[x]);
    }
    int unionbysize(int x,int y,int &ans) {
        int px = findparent(x);
        int py = findparent(y);
        if(px==py) return size[px]*size[py];
        if(size[px]>size[py]) 
        {
            ans+=size[px]*size[py];
            parent[py] = px;
            size[px]+=size[py];
        }
        else 
        {
            ans+=size[px]*size[py];
            parent[px] = py;
            size[py]+=size[px];
        }
        return ans;
    }
   
};
