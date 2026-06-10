class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        return getmaxsum(nums)-getminsum(nums);
        
    }
    long long getminsum(vector<int>&nums){
        int n = nums.size();
        vector<long long > left(n),right(n);
        stack<int>st;
        for(int i = 0 ;i<n ;i++){
            while(!st.empty( ) && nums[st.top()]>nums[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=i+1;
            }
            else{
                left[i]=i-st.top();
            }
            st.push(i);

        }
        while(!st.empty()) st.pop();

        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && nums[st.top()] >= nums[i])
            {
                st.pop();
            }

            right[i] = st.empty() ? n-i : st.top()-i;

            st.push(i);
             }

        long long sum = 0;

        for(int i=0;i<n;i++)
        {
            sum += 1LL * nums[i] * left[i] * right[i];
        }

        return sum;
    }

       long long getmaxsum(vector<int>& nums)
    {
        int n = nums.size();

        vector<long long> left(n), right(n);

        stack<int> st;

        for(int i=0;i<n;i++)
        {
            while(!st.empty() && nums[st.top()] < nums[i])
            {
                st.pop();
            }

            left[i] = st.empty() ? i+1 : i-st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        for(int i=n-1;i>=0;i--)
               {
            while(!st.empty() && nums[st.top()] <= nums[i])
            {
                st.pop();
            }

            right[i] = st.empty() ? n-i : st.top()-i;

            st.push(i);
        }

        long long sum = 0;

        for(int i=0;i<n;i++)
        {
            sum += 1LL * nums[i] * left[i] * right[i];
        }

        return sum;
    }

    };