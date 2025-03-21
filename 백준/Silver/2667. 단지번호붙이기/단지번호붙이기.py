import sys
from collections import deque


sys. setrecursionlimit(10**6)

def recur(y,x):
    
    visited[y][x] = 1
    count = 1

    directions = [(0,1),(1,0),(-1,0),(0,-1)]
    
    for dy, dx in directions:
        ny, nx = dy + y , dx + x
        if 0 <= ny < n and 0 <= nx <n and graph[ny][nx] ==1 and visited[ny][nx] ==0:
            count += recur(ny, nx)
            
    return count 
            

input = sys.stdin.readline

n = int(input())

graph = [ list(map(int, input().strip())) for _ in range(n)]
visited = [[0]*n for _ in range(n)]

result = []
for y in range(n):
    for x in range(n):
        if graph[y][x] == 1 and visited[y][x] == 0:
            result.append(recur(y,x))
            

print(len(result))
     
for r in  sorted(result):
    print(r)
            
            
