import sys



def recur(idx,pay):
    global total_pay 
            
    
    if idx >= n:
        total_pay = max(total_pay,pay)
        return

    if idx + arr[idx][0] <=n:
        recur(idx + arr[idx][0], pay + arr[idx][1])
    
    recur(idx+1, pay)
    

    
total_pay = 0
n = int(input())

arr = [list(map(int, sys.stdin.readline().split())) for _ in range (n)]

recur(0,0)

print(total_pay) 