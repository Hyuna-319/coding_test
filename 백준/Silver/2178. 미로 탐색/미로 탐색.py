import sys
from collections import deque

def bfs(y, x):
    q = deque()
    q.append((y, x))

    visited = [[0]*X for _ in range(Y)]
    visited[y][x] = 1

    directions = [(0,1),(1,0),(0,-1),(-1,0)]
    
    while q:
        ey, ex = q.popleft()
        
        for dy, dx in directions:
            ny, nx = ey + dy, ex + dx
            
            if 0 <= ny < Y and 0 <= nx < X:
                if graph[ny][nx] == 1 and visited[ny][nx] == 0:
                    visited[ny][nx] = visited[ey][ex] + 1
                    q.append((ny, nx))

    return visited[Y-1][X-1]


input = sys.stdin.readline
Y, X = map(int, input().split())
graph = [list(map(int, list(input().strip()))) for _ in range(Y)]

print(bfs(0, 0))
