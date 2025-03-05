import sys

def recur(number,strart):
    
    if number == M :
        print(*arr)
        return

    
    for i in range(strart,N+1):
        if i not in arr:
            arr.append(i)
            recur(number+1, i+1)
            arr.pop()

N, M  = map(int, sys.stdin.readline().split())
arr = [] 

recur(0,1)
