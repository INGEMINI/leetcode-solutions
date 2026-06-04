class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int n= nums.size();
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i+1,right=n-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    res.push_back({nums[i],nums[left],nums[right]});
                    while(left < right && nums[left]==nums[left+1]) left++;
                    while(left < right && nums[right]==nums[right-1]) right--;
                    left++;
                    right--;

                }
                else if(sum<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return res;
               
    }
};
        //approach 2 --> but as time complexity is o(n3) so is not optimal.
        // int n=nums.size();
        //  vector<vector<int>> newv;

        // for(int i=0;i<n-2;i++){
        //     for(int j=i+1;j<n-1;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(((nums[i]+nums[j]+nums[k])==0)&&( ((i!=j) && (i!=k)) &&(j!=k))) {
                        
        //                 vector<int>v;
        //                 v.push_back(nums[i]);
        //                 v.push_back(nums[j]);
        //                 v.push_back(nums[k]);
        //                 sort(v.begin(),v.end());
        //                 if(find(newv.begin(), newv.end(), v) == newv.end()) {
        //                 newv.push_back(v);

        //                 }

        //             }
        //         }
        //     }
        // }
        // return newv;
 