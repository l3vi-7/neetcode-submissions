class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int slow = -1, fast = 0; 
        int k = 0;
        
        while (fast < n) {
            if (nums[fast] != val) {
                nums[++slow] = nums[fast];
            }
            fast++;
        }
        return slow + 1;
    }
};