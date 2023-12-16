long long int countStr(long long int n){
    return 1 + 2*n + (3*n*(n-1))/2 + max(0ll,(n*(n-1)*(n-2))/2);
}
