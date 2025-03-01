import sys

def solution(n):
    
    arr = list(map(int, sys.stdin.readline().split()))
    
    prefix = [0 for _ in range(n+1)]

    for i in range(n):
        prefix[i+1] = max(prefix[i] + arr[i], arr[i])
    
    result = [-1001]*(n+1)
    result = max(prefix[1:], result)

    return max(result)


    
n = int(input())
print(solution(n))
