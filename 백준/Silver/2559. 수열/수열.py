import sys

def solution(N, K):
    temps = list(map(int, sys.stdin.readline().split()))


    prefix_sum = sum(temps[:K])
    max_sum = prefix_sum

   
    for i in range(K, N):
        prefix_sum += temps[i] - temps[i-K]  
        max_sum = max(max_sum, prefix_sum)   

    return max_sum


N, K = map(int, sys.stdin.readline().split())
print(solution(N, K))
