import sys

def solution(N):
    arr_y = []
    arr_x = []
    answer = [float('inf')] * N 

    for _ in range(N):
        a, b = map(int, sys.stdin.readline().split())
        arr_y.append(b)
        arr_x.append(a)
        
    for y in arr_y:
        for x in arr_x:
            dist = []
            
  
            for i in range(N):
                d = abs(x - arr_x[i]) + abs(y - arr_y[i])
                dist.append(d)
           
            dist.sort()
            
            total = 0
            for i in range(N):
                total += dist[i]
                answer[i] = min(answer[i], total)
    
    print(*answer)

N = int(sys.stdin.readline().rstrip())
solution(N)
