class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //mine
        int k = 0,l=0;
        vector<int>arr(nums1.size(),-1);
        vector<int>index1(nums1.size(),-1);
         vector<int>index2(nums1.size(),-1);
        for(int i = 0 ;i<nums1.size();i++){
            for(int j = 0 ;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    index1[k]=i;
                    index2[l]=j;
                    k++;
                    l++;
                }
            }
        }
        for(auto j : index2){
           
           int no =  nums2[j];
           for(int p = j+1; p<nums2.size() ;p++  ){
            if(nums2[p]>no){
             int index = find(nums1.begin(), nums1.end(), no) - nums1.begin();
             arr[index]=nums2[p];
             break;
            }

            
           }
        }
        return arr;
        
    }
};