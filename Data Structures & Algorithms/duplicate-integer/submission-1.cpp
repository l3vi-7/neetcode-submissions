class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> mp;

        for (auto i : nums) {
            if (mp.find(i) != mp.end())
                return true;
            mp[i] = true;
        }

        return false;
    }
};