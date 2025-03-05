import sys

def recur(number):
    
    if number == M :
        print(*arr)
        return

    
    for i in range(1,N+1):
        arr.append(i)
        recur(number+1)
        
        arr.pop()

N, M  = map(int, sys.stdin.readline().split())
arr = [] 

recur(0)
