class Solution {
    vector<vector<int>> output;
    vector<int> curr;
public:
    void backtrack(vector<int>& nums, vector<int>& curr, int target, int idx) {
        if (target < 0) return;
        if (target == 0) {
            output.push_back(curr);
            return;
        }

        for (int i = idx; i < nums.size(); i++) {
            if (nums[i] > target) break;
            curr.push_back(nums[i]);
            backtrack(nums, curr, target - nums[i], i);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        backtrack(nums, curr, target, 0);

        return output;
    }
};
