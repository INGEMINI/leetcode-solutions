class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less;
        vector<int>equal;
        vector<int>great;
        for(int i = 0 ;i<nums.size();i++){
            if(nums[i] < pivot) less.push_back(nums[i]);
            if(nums[i]==pivot) equal.push_back(nums[i]);
            if(nums[i]>pivot) great.push_back(nums[i]);
        }
        int m=0, i=0,j=0,k=0;

        while(i<less.size()){
            nums[m]=less[i];
            m++;
            i++;
        }
        while(j<equal.size()){
            nums[m]=equal[j];
            m++;
            j++;
        }
        while(k<great.size()){
            nums[m]=great[k];
            m++;
            k++;

        }
        return nums;


        
    }
};