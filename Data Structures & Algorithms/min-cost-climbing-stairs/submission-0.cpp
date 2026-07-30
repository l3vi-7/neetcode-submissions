class Solution {
public:
    int minCost(vector<int>& cost, int n, vector<int>& dp) {
        if (dp[n] != -1) return dp[n];
        
        dp[n] = cost[n] + min(minCost(cost, n - 1, dp), minCost(cost, n - 2, dp));
        return dp[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        return min(minCost(cost, n - 1, dp), minCost(cost, n - 2, dp));
    }
};