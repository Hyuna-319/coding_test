import sys
from collections import deque



def bfs(start):
    
    
    q = deque()
    q.append((start,0))
    visited = set()
    visited.add(start)
    
    dy = [-1,1,0,0]
    dx = [0,0,-1,1]
     
    answer = '123456780'
    while q:
        now, count = q.popleft()
        
        if now == answer:
            return count
        
        zero_idx = now.index('0')
        y,x = divmod(zero_idx, 3)
        
        for i in range(4):
            ny, nx = y + dy[i], x + dx[i]
            
            if 0 <= ny < 3 and 0 <= nx < 3:
                new_idx = ny*3 + nx
                puzzle = list(now)
                puzzle[zero_idx], puzzle[new_idx] = puzzle[new_idx], puzzle[zero_idx]
                new_state = ''.join(puzzle)
                
                if new_state not in visited:
                    visited.add(new_state)
                    q.append((new_state, count +1))
                
    
    return -1

            
input = sys.stdin.readline

start = ''
for _ in range(3):
    start += ''.join(input().split())

print(bfs(start))


