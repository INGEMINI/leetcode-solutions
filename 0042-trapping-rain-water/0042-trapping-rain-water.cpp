class Solution {
public:
    int trap(vector<int>& height) {
        //llm
        int n = height.size();
        vector<int>rightmax(n,0),leftmax(n,0);
        leftmax[0]=height[0];
        for(int i = 1; i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        rightmax[n-1]=height[n-1];
        for(int i = n-2 ; i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        int water = 0;
        for(int i = 0 ; i<n ; i ++){
            water += min(leftmax[i],rightmax[i]) - height[i];
        }
        return water;

        
    }
};