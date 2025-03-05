import sys

def recur(number,strart):
    
    if number == M :
        print(*arr)
        return

    
    for i in range(strart,N+1):
        arr.append(i)
        recur(number+1, i)
        arr.pop()

N, M  = map(int, sys.stdin.readline().split())
arr = [] 

recur(0,1)