n = int(input())

dp = [-1 for _ in range(n+1)]

for idx in range(n+1):
    if idx < 2:
        dp[idx] = idx
    
    else:
        dp[idx] = dp[idx-1] + dp[idx-2]
        
print(dp[-1])