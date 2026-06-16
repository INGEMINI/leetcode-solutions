class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;          // Kitni baar jump kiya
    int currentEnd = 0;     // Abhi ke jump se max kahan tak pahuch sakte hain
    int farthest = 0;       // Aage future me sabse door kahan tak pahuch sakte hain

    for (int i = 0; i < nums.size() - 1; i++) {
        farthest = max(farthest, i + nums[i]);  // Max door kahan tak pahuch sakte hain

        if (i == currentEnd) {   // Jab current jump ka end pahuch gaya
            jumps++;             // Ek aur jump lena padega
            currentEnd = farthest; // Naya jump ka range set karo
        }
    }

    return jumps;
        
    }
};