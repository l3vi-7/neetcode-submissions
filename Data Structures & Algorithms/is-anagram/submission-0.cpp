class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> dict(26);

        for (char c : s) {
            dict[c - 'a']++;
        }

        for (char c : t) {
            dict[c - 'a']--;
        }

        for (int i = 0; i < 26; i++)
            if (dict[i] != 0)
                return false;

        return true;
    }
};
