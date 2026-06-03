class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n = nums.size();
       vector<int>parr,narr;
       for(auto it :nums){
        if(it > 0){
            parr.push_back(it);

        }
        else{
            narr.push_back(it);
        }
       }
        int i=0,k=0,j=0;
        while(k< nums.size()){
            if((k%2)==0){
            nums[k]=parr[i];
            k++,i++;
            }
            else{
                nums[k]=narr[j];
                k++,j++;
            }

        }
        return nums;
       }

    
};