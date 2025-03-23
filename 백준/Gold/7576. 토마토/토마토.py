import sys
from collections import deque




def make_graph():
    return [list(map(int, input().strip().split())) for _ in range(N)]

def bfs(y,x):
    

    q = deque()
    
    for y in range(N):
        for x in range(M):
            if graph[y][x] == 1:
                q.append((y,x))


    directions = [(0,1),(1,0),(-1,0),(0,-1)]
    
    while q:
        ey, ex = q.popleft()
        
        for dy, dx in directions:
            ny, nx = dy + ey, dx + ex
            if 0 <= ny < N and 0 <= nx <M and graph[ny][nx] ==0 and visited[ny][nx] == 0:
                graph[ny][nx] = graph[ey][ex] + 1 
                q.append((ny,nx))
    
    result = 0 
    for row in graph:
        if 0 in row:
            print(-1)
            exit()
        result = max(result, max(row))
    
   
    
    return (result-1)
                
    
input = sys.stdin.readline

M, N = map(int, input().split())
graph = make_graph()

visited = [[0]*M for _ in range(N)]

print(bfs(0,0))