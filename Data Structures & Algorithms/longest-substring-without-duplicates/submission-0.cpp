class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        array<int, 256> pos;
        pos.fill(-1);

        int l = 0, h = 0, n = s.length();
        int len = 0;
        int max_len = 0;

        while (l < n && h < n) {
            int c = s[h];
            if (pos[c] == -1) {
                pos[c] = h;
                len++;
                h++;
            } else {
                char k = s[l];
                pos[k] = -1;
                l++;
                len--;
            }
            max_len = max(max_len, len);
        }

        return max_len;
    }
};