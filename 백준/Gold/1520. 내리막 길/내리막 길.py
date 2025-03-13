import sys

sys.setrecursionlimit(10**6)

def recur(y,x):
    
    route = 0
    
    if dp[y][x] != -1:
        return dp[y][x]
    
    if y == a-1 and x == b-1:
        return 1
    
    for dy,dx in [[0,1],[0,-1],[1,0],[-1,0]]:
        
        ey = y + dy
        ex = x + dx
        
        if 0 <= ey < a and 0 <= ex < b:
            if graph[y][x] > graph[ey][ex]:
                route += recur(ey,ex)
                
    dp[y][x] = route
    return dp[y][x]
                


input = sys.stdin.readline
a, b = map(int, input().split())

graph = [list(map(int, input().split()))  for _ in range(a)]

dp = [[-1]*b for _ in range(a)]


answer= recur(0,0)

print(answer)
