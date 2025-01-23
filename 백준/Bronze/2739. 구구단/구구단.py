def solution(N):
    answer = 0
    for i in range(1,10):
        answer = N * i
        print(f"{N} * {i} = {answer}")
        
N = int(input())

solution(N)