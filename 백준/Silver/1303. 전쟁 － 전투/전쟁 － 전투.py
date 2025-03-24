import sys
from collections import deque


input = sys.stdin.readline


def bfs(y,x,team):
    
    count = 1
    
    q = deque()
    q.append((y,x))
    visited[y][x] = 1
    
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    
    while q:
        ey, ex = q.popleft()
        
        for dy, dx in directions:
            ny, nx = dy + ey, dx + ex
            if 0 <= ny < M and 0 <= nx < N and graph[ny][nx] == team and visited[ny][nx] == 0:
                visited[ny][nx] = 1
                q.append((ny,nx))
                count +=1
    
    return count

N, M = map(int, input().split()) 
graph = [list(input().strip()) for _ in range(M)]  
visited = [[0]*N for _ in range(M)]

my_power = 0
enemy_power = 0

for y in range(M):
    for x in range(N):
        if visited[y][x] == 0:
            team = graph[y][x]
            size = bfs(y,x,team)
            if team == 'W':
                my_power += size**2
            else:
                enemy_power += size**2
                
print(my_power, enemy_power)