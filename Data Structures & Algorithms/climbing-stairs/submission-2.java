class Solution {
    
    public int climbStartMemo(int n, int[] dp) {
        if (n == 0) return 1;
        if (n < 0) return 0;
        if (dp[n] != -1) return dp[n];

        dp[n] = climbStartMemo(n - 1, dp) + climbStartMemo(n - 2, dp);

        return dp[n];
    }

    public int climbStartTabular(int n , int[] dp) {
        if (n <= 2) return n;

        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3; i < n + 1; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }

    public int climbStairs(int n) {
        int[] dp = new int [n + 1];
        for(int i = 0; i < n + 1; i++) {
            dp[i] = -1;
        }

        // return climbStartMemo(n, dp);
        return climbStartTabular(n, dp);
    }
}
