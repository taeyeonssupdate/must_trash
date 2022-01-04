class Solution:
    def longestCommonSubsequence(self, t1: str, t2: str) -> int:
        l1, l2 = len(t1), len(t2)
        dp = [[0]*(l2+1) for _ in range(l1+1)]
        for i in range(1, l1+1):
            for j in range(1, l2+1):
                if t1[i-1] == t2[j-1]:
                    dp[i][j] = dp[i-1][j-1] + 1
                else:
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j])
        return dp[l1][l2]


print(Solution().longestCommonSubsequence('TGACA', 'ATCTGAGTAT'))
