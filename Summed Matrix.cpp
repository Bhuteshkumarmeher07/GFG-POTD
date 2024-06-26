long long sumMatrix(long long n, long long q) {
        long long start = max(1LL, q - n);
        long long end = min(n, q - 1);
        if (start > end) {
            return 0;
        }
        return end - start + 1;
    }
