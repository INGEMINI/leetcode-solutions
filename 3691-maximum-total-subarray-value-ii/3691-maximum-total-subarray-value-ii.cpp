// class Solution {
// public:
//     long long maxTotalValue(vector<int>& nums, int k) {
//         //streakques
//         //approach
// //         binary search
// // deque
// // prefix sums
// // contribution counting
        
//     }
// };

#include <vector>
#include <algorithm>
#include <queue>
#include <tuple>

using namespace std;

class SparseTableRMQ {
private:
    vector<int> lg;
    vector<vector<int>> f_max;
    vector<vector<int>> f_min;

public:
    SparseTableRMQ(const vector<int>& nums) {
        int n = nums.size();
        
        // Precompute log2 table
        lg.assign(n + 1, 0);
        for (int i = 2; i <= n; ++i) {
            lg[i] = lg[i / 2] + 1;
        }
        
        int K = lg[n] + 1;
        f_max.assign(n, vector<int>(K, 0));
        f_min.assign(n, vector<int>(K, 0));
        
        for (int i = 0; i < n; ++i) {
            f_max[i][0] = nums[i];
            f_min[i][0] = nums[i];
        }
        
        for (int j = 1; j < K; ++j) {
            for (int i = 0; i <= n - (1 << j); ++i) {
                f_max[i][j] = max(f_max[i][j - 1], f_max[i + (1 << (j - 1))][j - 1]);
                f_min[i][j] = min(f_min[i][j - 1], f_min[i + (1 << (j - 1))][j - 1]);
            }
        }
    }
    
    int query_max(int l, int r) {
        int k = lg[r - l + 1];
        return max(f_max[l][k], f_max[r - (1 << k) + 1][k]);
    }
    
    int query_min(int l, int r) {
        int k = lg[r - l + 1];
        return min(f_min[l][k], f_min[r - (1 << k) + 1][k]);
    }
};

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        SparseTableRMQ st(nums);
        
        // Max-heap storing tuples of {value, l, r}
        // Since std::tuple compares elements lexicographically from left to right, 
        // the largest value will naturally sit at the top of the heap.
        priority_queue<tuple<long long, int, int>> pq;
        
        // Step 1: Initialize heap with the largest valid subarray for each starting index l
        for (int l = 0; l < n; ++l) {
            long long val = (long long)st.query_max(l, n - 1) - st.query_min(l, n - 1);
            pq.push({val, l, n - 1});
        }
        
        long long total_value = 0;
        
        // Step 2: Pop the best configuration k times
        for (int i = 0; i < k; ++i) {
            auto [val, l, r] = pq.top();
            pq.pop();
            
            total_value += val;
            
            // If the window can shrink further from the right, push the next best candidate
            if (r > l) {
                long long next_val = (long long)st.query_max(l, r - 1) - st.query_min(l, r - 1);
                pq.push({next_val, l, r - 1});
            }
        }
        
        return total_value;
    }
};