import sys

def recur(number,start):

    
    if number == M :
        print(*arr)
        return

    for i in range(start,N+1):
        if numbers[i-1] not in arr:
            arr.append(numbers[i-1])
            recur(number + 1, i)
            arr.pop()


N, M  = map(int, sys.stdin.readline().split())
numbers = list(map(int, sys.stdin.readline().split()))    
numbers.sort()
    
arr = [] 

recur(0,1)