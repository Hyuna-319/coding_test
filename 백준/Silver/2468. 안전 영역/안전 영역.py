import sys
from collections import deque

def bfs(y,x,r):
    
    q = deque()
    q.append((y,x))
    
    visited[y][x] = 1
    directions = [(0,1),(1,0),(0,-1),(-1,0)]
    
    while q:
        ey, ex = q.popleft()
        
        for dy, dx in directions:
            ny, nx = dy + ey, dx + ex
            

            if 0<= ny < N and 0<= nx <N and graph[ny][nx] > r and visited[ny][nx] == 0:
                visited[ny][nx] = 1
                q.append((ny,nx))
    
                

input = sys.stdin.readline
N = int(input())

graph = [list(map(int, input().split())) for _ in range(N)]
maxh = max(max(row) for row in graph)

result = []

for r in range(0,maxh+1):
    safe_area = 0
    visited = [[0]*N for _ in range(N)]
    
    for y in range(N):
        for x in range(N):
            if graph[y][x] > r and visited[y][x] == 0:
                bfs(y,x,r)
                safe_area +=1
    result.append(safe_area)
    

print(max(result))