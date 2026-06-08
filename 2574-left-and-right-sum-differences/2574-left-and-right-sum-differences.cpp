class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftwale(nums.size(),0);
    vector<int>rightwale(nums.size(),0);
    vector<int>ans;
    int sum = 0 ;
    for(int i = 0 ;i<nums.size();i++){
        sum=0;
        for(int j = 0 ;j<i;j++){
            sum+=nums[j];
        }
        leftwale[i]=sum;
    }
        for(int i = 0 ;i<nums.size();i++){
            sum = 0 ;
            for(int j = i+1 ; j<nums.size();j++){
                  sum+=nums[j];
            }
            rightwale[i]=sum;

        }
        for(int i = 0 ;i<nums.size();i++){
            ans.push_back(abs(leftwale[i]-rightwale[i]));
        }
        return ans;
        
    }
};