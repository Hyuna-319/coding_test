def solution(A,B,C):
    
    count = 0 
    cash = 0
    num = [A,B,C]

    if num.count(num[0]) == 3:
        cash = 10000 + num[0]*1000
    elif num.count(num[0]) == 2:
        cash = num[0]*100 + 1000
    elif num.count(num[1]) == 2:
        cash = num[1]*100 + 1000
        
        
        
    else:
        cash = max(num)*100

    return cash




A, B, C = map(int,input().split())
print(solution(A,B,C))