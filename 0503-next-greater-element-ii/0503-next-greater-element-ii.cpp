class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // mine
        int k = 0, l = 0;
        vector<int> arr(nums.size(), -1);
      
        for (int j = 0 ;j< nums.size();j++) {
            int n = nums.size();

            int no = nums[j];
            for (int cnt = 1; cnt < n; cnt++) {
                int p = (j + cnt) % n;
                if (nums[p] > no) {
                    
                    arr[j] = nums[p];
                    
                    break;
                }
              
            }
        }
        return arr;
    }
};