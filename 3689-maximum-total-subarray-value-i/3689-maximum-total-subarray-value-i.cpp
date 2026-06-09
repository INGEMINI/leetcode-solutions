class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        int maxe = *max_element(nums.begin(),nums.end());
        int mine = *min_element(nums.begin(),nums.end());
        long long  diff = maxe-mine;
        long long ans = diff*k;
        return ans;
    }
};