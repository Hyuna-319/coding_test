import sys

sys.setrecursionlimit(10**6)
def recur(y,x):
    
    if dp[y][x] != 0:
        return dp[y][x]
    
    
    for dy, dx in [[0,1],[1,0],[-1,0],[0,-1]]:
        ey = dy + y
        ex = dx + x
        
        if 0 <= ey < n and 0 <= ex < n:
            if graph[y][x] < graph[ey][ex]:
                dp[y][x] = max(dp[y][x], recur(ey,ex) +1)
                
    return dp[y][x]



input = sys.stdin.readline
n  = int(input())

graph = [list(map(int, input().split()))for _ in range(n)]

dp = [[0]*n for _ in range(n)]

for y in range(n):
    for x in range(n):
        recur(y,x)

print(max(map(max, dp))+1)