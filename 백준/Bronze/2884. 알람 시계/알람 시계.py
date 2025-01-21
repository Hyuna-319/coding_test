def solution(H, M):
    if M >= 45: 
        M -= 45
    else:  
        H -= 1
        M += 15
        
       
        if H < 0:
            H = 23

    return H, M

H, M = map(int, input().split())

print(*solution(H, M))
