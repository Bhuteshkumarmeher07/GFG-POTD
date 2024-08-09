
int Maximize(vector<int> &arr) {
        // Complete the function
        int n = arr.size();
        sort(arr.begin(), arr.end());
        long long int ans = 0;
        int mod = 1e9+7;
        for(int i=0;i<n; i++){
            ans += 1LL * i * arr[i];
            ans = ans % mod; // to avoid the overload
        }
        return ans;
    }
