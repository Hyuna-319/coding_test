import sys


def solution(N):
    
    for _ in range(N):
        number = int(sys.stdin.readline().strip())
        
        for i in range(2,1_000_001):
            if number % i ==0:
                print("NO")
                break
            if i == 1_000_000:
                print("YES")
    
  

   
    
N = int(sys.stdin.readline().rstrip())
solution(N)
