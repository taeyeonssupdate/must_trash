class Solution(object):
    def DP_totalcoinchange(self, coins, amount):
        rs = [amount+1] * (amount+1)
        rs[0] = 0
        for i in range(1, amount+1):
            for c in coins:
                if i >= c:
                    rs[i] = min(rs[i], rs[i-c] + 1)

        if rs[amount] == amount+1:
            return -1
        return rs[amount]

    def BFS_totalcoinchange(self, coins, amount):
        """
        :type coins: List[int]
        :type amount: int
        :rtype: int
        """
        if amount == 0:
            return 0
        value1 = [0]
        value2 = []
        nc = 0
        visited = [False]*(amount+1)
        visited[0] = True
        while value1:
            nc += 1
            for v in value1:
                for coin in coins:
                    newval = v + coin
                    if newval == amount:
                        return nc
                    elif newval > amount:
                        continue
                    elif not visited[newval]:
                        visited[newval] = True
                        value2.append(newval)
            value1, value2 = value2, []
        return -1


print("DP 129:", Solution().DP_totalcoinchange([4, 1, 5, 10, 50], 129))
print("DP 63:", Solution().DP_totalcoinchange([4, 1, 5, 10, 50], 63))
print("DP 37:", Solution().DP_totalcoinchange([4, 1, 5, 10, 50], 37))
print("BFS 129:", Solution().BFS_totalcoinchange([4, 1, 5, 10, 50], 129))
print("BFS 63:", Solution().BFS_totalcoinchange([4, 1, 5, 10, 50], 63))
print("BFS 37:", Solution().BFS_totalcoinchange([4, 1, 5, 10, 50], 37))
