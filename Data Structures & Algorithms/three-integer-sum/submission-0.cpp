class Solution {
public:
    void isPair(vector<int>& nums, int l, int r, int target, vector<vector<int>>& result) {
        while (l < r) {
            if (nums[l] + nums[r] == target) {
                result.push_back({- 1 *target, nums[l], nums[r]});
                l++;
                r--;
                while (l < r && nums[l] == nums[l - 1]) {
                    l++;
                }
                while (l < r && nums[r] == nums[r + 1]) {
                    r--;
                }
            } else if (nums[l] + nums[r] < target)
                l++;
            else
                r--;
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;

        for (int i = 0; i < nums.size() - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if (nums[i] > 0) break;
            int target = nums[i];
            isPair(nums, i + 1, n - 1, -1 * target, result);
        }

        return result;
    }
};
