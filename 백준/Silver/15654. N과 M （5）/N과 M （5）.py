import sys

def recur(number):

    
    if number == M :
        print(*arr)
        return

    for i in range(N):
        if numbers[i] not in arr:
            arr.append(numbers[i])
            recur(number + 1)
            arr.pop()


N, M  = map(int, sys.stdin.readline().split())
numbers = list(map(int, sys.stdin.readline().split()))    
numbers.sort()
    
arr = [] 

recur(0)