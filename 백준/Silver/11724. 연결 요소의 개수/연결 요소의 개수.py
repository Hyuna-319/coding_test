import sys
from collections import deque


def make_graph():
    g = [[] for _ in range(N+1)]
    for _ in range(M):
       a, b = map(int, input().split())
       g[a].append(b)
       g[b].append(a)
    return g

def bfs(node):

    q = deque()
    q.append(node)
    visited[node] = 1
    
    while q:
        node = q.popleft()
        
        
        for nxt in graph[node]:
            if visited[nxt] == 0:
                visited[nxt] = 1
                q.append(nxt)
                
        
input = sys.stdin.readline

N, M = map(int, input().split())

visited = [0]*(N+1)

graph = make_graph()

count = 0
for i in range(1,N+1):
    if visited[i] == 0:
        bfs(i)
        count+=1

print(count)