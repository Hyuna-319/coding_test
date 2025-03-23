

def solution(n, computers):
    visited = [0]*(n+1)
    
    def recur(node):
        visited[node] =1
        for nxt in range(n):
            if visited[nxt] ==0 and computers[node][nxt] == 1:
                recur(nxt)
    
    count = 0
    for i in range(n):
        if visited[i] == 0:
            recur(i)
            count +=1
            
    return count

    
