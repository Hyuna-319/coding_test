def solution(S,N):
    X = list(S)
    result = X[N-1]

    return result

S = str(input())
N = int(input())  

print(solution(S,N))