class Solution {
public:
//kadane's algo
//approach --> sum add then max see then sum = 0 if sum<0 
    int maxSubArray(vector<int>& nums) {
        int currsum=0;
        int maxsum=INT_MIN;
        for(int val: nums){
            currsum+=val;
            maxsum=max(currsum,maxsum);
            if(currsum<0){
                currsum=0;
            }
        }

        
        return maxsum;

    }
};