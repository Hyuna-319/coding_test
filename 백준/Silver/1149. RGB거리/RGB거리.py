import sys



N = int(input())


dp = [[0 for _ in range(3)]for _ in range(N)]
RGB = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]


for color in range(3):
    dp[0][color] = RGB[0][color]
    
for idx in range(1,N):
    for rgb in range(3):
        if rgb == 0: #red
            dp[idx][rgb] = min(dp[idx-1][1], dp[idx-1][2]) + RGB[idx][rgb]
        if rgb == 1: #green
            dp[idx][rgb] = min(dp[idx-1][0], dp[idx-1][2]) + RGB[idx][rgb]
        if rgb == 2: #blue 
            dp[idx][rgb] = min(dp[idx-1][0], dp[idx-1][1]) + RGB[idx][rgb]
            
print(min(dp[N-1]))