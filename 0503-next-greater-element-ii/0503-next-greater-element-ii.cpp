class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // mine
        int k = 0, l = 0;
        vector<int> arr(nums.size(), -1);
        // vector<int> index1(nums1.size(), -1);
        // vector<int> index2(nums1.size(), -1);
        // for (int i = 0; i < nums1.size(); i++) {
        //     for (int j = 0; j < nums2.size(); j++) {
        //         if (nums1[i] == nums2[j]) {
        //             index1[k] = i;
        //             index2[l] = j;
        //             k++;
        //             l++;
        //         }
        //     }
        // }
        int i = 0;
        for (int j = 0 ;j< nums.size();j++) {
            int n = nums.size();

            int no = nums[j];
            for (int cnt = 1; cnt < n; cnt++) {
                int p = (j + cnt) % n;
                if (nums[p] > no) {
                    
                    arr[j] = nums[p];
                    
                    break;
                }
                i++;
            }
        }
        return arr;
    }
};