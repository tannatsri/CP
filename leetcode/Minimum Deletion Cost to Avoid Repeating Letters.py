class Solution:
    def minCost(self, s: str, cost: List[int]) -> int:
        n = len(s)
        ans = 0
        if(n == 1):
            return 0
        li = []
        i = 0
        while(i < n - 1):
            
            if(s[i] == s[i + 1]):
                j = i + 1
                while(s[j] == s[i]):
                    j += 1
                    if(j == n):
                        break
                    
                
                ans += sum(cost[i:j]) - max(cost[i:j])
                i = j
                continue
            i+=1
        return ans
            
            
        