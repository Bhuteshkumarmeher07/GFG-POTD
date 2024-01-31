unordered_map<string, bool> mpp;
    void insert(struct TrieNode *root, string s) {
        mpp[s] = 1;
    }
    bool search(struct TrieNode *root, string s) {
        return mpp[s];
    }
