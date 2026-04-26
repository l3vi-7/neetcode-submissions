class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxCount = 0;
        for (int i : nums) {
            if (i == 1) {
                count += 1;
                maxCount = max(count, maxCount);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
};