from collections import deque
import sys








def bfs(y,x):
    maxi = 0
    
    for y in range(Y):
        for x in range(X):
            if graph[y][x] == 'L': # 육지일때만
                visited = [[0]*(X) for _ in range(Y)]
                dist =[[0]*(X) for _ in range(Y)]
            
            # BSF
            
                q = deque()
                q.append([y,x])
                visited[y][x] = 1
                directions = [[0,1],[1,0],[-1,0],[0,-1]]
                while q:
                    ey, ex = q.popleft()
                
                    for dy, dx in directions:
                        ny, nx = ey + dy , ex + dx
                        if 0 <= ny <  Y and 0 <= nx < X  and graph[ny][nx] == 'L' and visited[ny][nx] == 0:
                                visited[ny][nx] = 1
                                dist[ny][nx] = max(dist[ey][ex] + 1, dist[ny][nx])
                                maxi = max(maxi, dist[ny][nx])

                                q.append([ny,nx])
    
    return maxi


input = sys.stdin.readline
Y, X = map(int, input().split())
graph = [list(input().rstrip()) for _ in range(Y)]
                            
print(bfs(Y,X))