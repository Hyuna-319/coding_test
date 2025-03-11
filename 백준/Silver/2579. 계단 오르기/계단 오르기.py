import sys

input = sys.stdin.readline
n = int(input())

stair = [int(input()) for _ in range(n)]


if n == 1:
    print(stair[0])
    exit()
        
dp = [0]*(n+1)

dp[1] = stair[0]

if n >= 2:
    dp[2] = dp[1] + stair[1]

for idx in range(3,n+1):   

    dp[idx] =  max(dp[idx-2]+ stair[idx-1],dp[idx-3]+stair[idx-2]+ stair[idx-1])
            
print(dp[-1])
