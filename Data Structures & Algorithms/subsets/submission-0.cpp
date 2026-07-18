class Solution {
    vector<vector<int>> result;
public:
    void subRec(vector<int>& nums, int i, int n, vector<int>& subset) {
        if (i == n) {
            result.push_back(subset);
            return;
        }

        subRec(nums, i + 1, n, subset);
        subset.push_back(nums[i]);
        subRec(nums, i + 1, n, subset);
        subset.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> subset;
        subRec(nums, 0, n, subset);

        return result;
    }
};
