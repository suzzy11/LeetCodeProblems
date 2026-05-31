class Solution {
public:
    bool check(vector<int>& nums) {
        int drops = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            // Compare current element to the next element.
            // (i + 1) % n safely wraps around to index 0 at the end.
            if (nums[i] > nums[(i + 1) % n]) {
                drops++;
            }
        }
        
        // If there is 1 or 0 drops, it is a valid rotated sorted array.
        // Returning the condition directly is a cleaner way to write an if/else!
        return drops <= 1; 
    }
};