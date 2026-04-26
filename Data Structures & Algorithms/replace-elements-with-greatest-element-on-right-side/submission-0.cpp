class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = -1;
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1) {
                max = arr[n - 1];
                arr[n - 1] = -1;
                continue;
            }
            if (max >= arr[i]) {
                arr[i] = max;
            } else {
                swap(arr[i], max);
            }
        }
        return arr;
    }
};