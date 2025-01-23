

def count(X,N):
    total = 0
    for i in range(1,N+1):
        a,b = map(int,input().split())
        total += a*b
    if total == X :
        return "Yes"
    else:
        return "No"
    
X = int(input())
N = int(input())
print(count(X,N))
        
    