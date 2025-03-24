import sys
from collections import deque


input = sys.stdin.readline

def make_graph():
    return [list(map(int, input().split())) for _ in range(H)]

def bfs():
    q = deque()
    q.append((0,0,0))
    

    horse =  [(1,2),(-1,2),(1,-2),(-1,-2),(2,1),(-2,1),(2,-1),(-2,-1)]
    monkey = [(0,1),(0,-1),(-1,0),(1,0)]
    
    while q:
        y,x,k = q.popleft()
        
        if y == H-1 and x == W-1:
            return visited[y][x][k] - 1
        
        if k < K:
            for dy, dx in horse:
                ny, nx = y + dy, x + dx
                nk = k + 1
                if 0 <= ny < H and 0 <= nx < W and graph[ny][nx] == 0 and visited[ny][nx][nk] == 0:
                    visited[ny][nx][nk] = visited[y][x][k] + 1
                    q.append((ny,nx,nk))
                    
                    
        for dy, dx in monkey:
            ny, nx = y + dy, x + dx
            if 0 <= ny < H and 0 <= nx < W and graph[ny][nx] == 0 and visited[ny][nx][k] == 0:
                visited[ny][nx][k] =  visited[y][x][k] + 1
                q.append((ny,nx,k))
    
    
    return -1 
    
 
K = int(input())
W, H = map(int, input().split())

graph = make_graph()
visited = [[[0]*(K+1)  for _ in range(W)]for _ in range(H)]
visited[0][0][0] = 1

print(bfs())