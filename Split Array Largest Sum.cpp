#include <algorithm>
#include <numeric>

class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        long long low = *std::max_element(arr, arr + N);
        long long high = std::accumulate(arr, arr + N, 0LL);

        while (low < high) {
            long long mid = low + (high - low) / 2;
            if (isPossible(arr, N, K, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
 private:
    bool isPossible(int arr[], int N, int K, long long mid) {
        int count = 1;
        long long sum = 0;

        for (int i = 0; i < N; ++i) {
            sum += arr[i];
            if (sum > mid) {
                sum = arr[i];
                count++;
            }
        }

        return count <= K;
    } 
