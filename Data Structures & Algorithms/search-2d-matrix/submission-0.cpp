class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();
        if (n == 0) return false;

        // Binary search on first column
        int top = 0, bottom = m - 1;
        int target_row = -1;
        while (top <= bottom) {
            int mid = top + (bottom - top) / 2;
            if (matrix[mid][0] == target) return true;
            else if (matrix[mid][0] > target) 
                bottom = mid - 1;
            else {
                if (mid == m - 1 || matrix[mid + 1][0] > target) {
                    target_row = mid;
                    break;
                } else 
                    top = mid + 1;
            }
        }

        cout << target_row << endl;

        if (target_row == -1) return false;

        // Binary Search on target_row
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[target_row][mid] == target) return true;
            else if (matrix[target_row][mid] > target) 
                right = mid - 1;
            else 
                left = mid + 1;
        }

        return false;
    }
};