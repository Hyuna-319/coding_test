def solution(A,B,C):
    X = C // 60
    Y = C % 60
    
    H = A + X
    M = B + Y
    if M > 59:
        M -= 60
        H +=1
        
    if H > 23:
        H-= 24
        

        
    return H,M
        
    
    


A,B = map(int, input().split()) # 현재 시간
C = int(input()) # 요리 필요 시간
H,M = solution(A,B,C)
print(f"{H} {M}")