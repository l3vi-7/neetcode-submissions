class Solution {
    int max_area = 0;
    int curr_area = 0;
public:
     void dfs(vector<vector<int>>& grid, int i, int j, int m, int n) {
        if (i < 0 || j < 0 || i == m || j == n) return;
        if (grid[i][j] == 0) return;
        curr_area++;
        grid[i][j] = 0;
        dfs(grid, i + 1, j, m, n);
        dfs(grid, i - 1, j, m, n);
        dfs(grid, i, j + 1, m, n);
        dfs(grid, i, j - 1, m, n);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    curr_area = 0;
                    dfs(grid, i, j, m, n);
                    max_area = max(max_area, curr_area);
                }
            }
        }

        return max_area;
    }
};