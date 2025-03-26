from collections import deque

def solution(board):
    n = len(board)


    visited = [[0]*n for _ in range(n)]
    
    q = deque()
    directions = [(0,0),(0,1),(0,-1),(-1,0),(1,0),(1,1),(1,-1),(-1,1),(-1,-1)]
            
    for y in range(n):
        for x in range(n):
            if board[y][x] == 1:
                for dy, dx in directions:
                    ny, nx = y + dy, x + dx
                    if 0 <= ny < n and 0 <= nx < n and visited[ny][nx] == 0:
                        visited[ny][nx] = 1
                        
                    

    
    answer = sum(visited[y][x] == 0 for x in range(n) for y in range(n))
    return answer