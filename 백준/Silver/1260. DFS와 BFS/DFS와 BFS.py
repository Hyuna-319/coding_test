import sys
from collections import deque

sys.setrecursionlimit(10**6)
input = sys.stdin.readline

N , M , V = map(int, input().split())

graph = [[] for _ in range(N+1)]
visited_dfs = [0]*(N+1)
visited_bfs = [0]*(N+1)



for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
    
for x in range(1,N+1):
    graph[x].sort()
    
def recur(node):

    
    visited_dfs[node] = 1
    print(node, end=' ')
    
    
    for nxt in graph[node]:
        if visited_dfs[nxt] == 0:
            recur(nxt)
    
   
def bfs(V):
    q = deque()
    q.append(V)
    visited_bfs[V] = 1
    
    
    while q:
        
        node = q.popleft()
        
       
        print(node, end=' ')
        
        
        for nxt in graph[node]:
            if visited_bfs[nxt] == 0:
                visited_bfs[nxt] = 1
                q.append(nxt)
            

        


        
  
recur(V)
print()
bfs(V)