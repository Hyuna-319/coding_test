import sys

input = sys.stdin.readline
n = int(input())

interview = [list(map(int, input().split())) for _ in range(n)]

dp = [0]*(n+1)

for idx in range(n)[::-1]:
    if idx + interview[idx][0] > n:
        dp[idx] = dp[idx+1]
    else:
        dp[idx]  = max(dp[idx+interview[idx][0]]+interview[idx][1],dp[idx+1])

    
print(dp[0])