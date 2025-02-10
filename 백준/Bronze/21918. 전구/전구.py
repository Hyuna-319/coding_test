def light(N,M):
    light = list(map(int,input().split()))
    
    for _ in range(M):
        a, b, c = map(int,input().split())
        
        if a == 1:
            light[b-1] = c
        
        elif a ==2:
            for i in range(b-1,c):
                light[i] = 1 - light[i]
        
        elif a ==3:
            light[b-1:c] = [0]*(c-b+1)
        else:
            light[b-1:c] = [1]*(c-b+1)
            
    return light
    
    
    
    
    
    
    
N,M = map(int,input().split())
print(*light(N,M))