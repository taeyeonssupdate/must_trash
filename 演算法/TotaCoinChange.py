class Solution(object):
    def totalcoinchange(self, coins, amount):
        rs = [amount+1] * (amount+1)
        rs[0] = 0
        for i in range(1, amount+1):
            for c in coins:
                if i >= c:
                    rs[i] = min(rs[i], rs[i-c] + 1)

        if rs[amount] == amount+1:
            return -1
        return rs[amount]


print(Solution().totalcoinchange([4, 1, 5, 10, 50], 129))
print(Solution().totalcoinchange([4, 1, 5, 10, 50], 63))
print(Solution().totalcoinchange([4, 1, 5, 10, 50], 37))
