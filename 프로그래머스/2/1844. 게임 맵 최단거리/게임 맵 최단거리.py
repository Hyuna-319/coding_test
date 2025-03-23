from collections import deque

def solution(maps):
    n = len(maps)
    m = len(maps[0])
    q = deque()
    q.append((0, 0))  
    directions = [(-1,0), (1,0), (0,-1), (0,1)]  

    while q:
        y, x = q.popleft()

        for dy, dx in directions:
            ny, nx = y + dy, x + dx

           
            if 0 <= ny < n and 0 <= nx < m and maps[ny][nx] == 1:
                
                maps[ny][nx] = maps[y][x] + 1
                q.append((ny, nx))

   
    if maps[n-1][m-1] == 1:
        return -1  
    else:
        return maps[n-1][m-1]  
