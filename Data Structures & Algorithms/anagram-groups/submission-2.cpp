class Solution {
public:
    string getSignature(string str) {
        string signature = string(26, 0);
        for (char c : str) {
            signature[c - 'a']++;
        }
        return signature;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;
        for (string s: strs) {
            string signature = getSignature(s);
            if (mp.find(signature) == mp.end()) {
                mp[signature] = {};
            }
            mp[signature].push_back(s);
        }

        for (auto& pair: mp) {
            result.push_back(pair.second);
        }

        return result;
    }
};