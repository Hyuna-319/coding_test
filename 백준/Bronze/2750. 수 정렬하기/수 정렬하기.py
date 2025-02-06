x = []
def solution(N):
    
    for _ in range (N):
        n = int(input())
        x.append(n)
        
    return sorted(x)
    

    
N = int(input())
answer = solution(N)


for i in range(N):
    print(answer[i])