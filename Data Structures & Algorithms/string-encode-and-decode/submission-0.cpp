class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string result = "";
        for (string str: strs) {
            int len = str.size();
            result += to_string(len) + "#" + str;
        }

        return result;
    }

    vector<string> decode(string s) {
        cout << s << endl;
        vector<string> result;
        for (int i = 0; i < s.size();) {
            int len = 0;
            while (s[i] != '#') {
                cout << "s[i] " << s[i] - '0' << endl;
                len = len * 10 + (s[i] - '0');
                i++;
            }
            i++;
            cout << "len " << len << endl;
            cout << i << endl;
            string str = "";

            while (len--) {
                str += s[i];
                i++;
            }

            result.push_back(str);
        }

        return result;
    }
};
