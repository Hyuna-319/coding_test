
import sys


def solution(N):
    answer = 0
    hint = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]
    
    for a in range(1,10):
        for b in range(1,10):
            for c in range(1,10):
                
                if (a==b or b==c or c==a):
                    continue
                
                cnt = 0
                for arr in hint:
                    num = arr[0]
                    strike = arr[1]
                    ball = arr[2]
                    
                    guess = list(map(int, str(num)))
                    candidate =[a,b,c]

                    

                    
                    strike_count = sum( [1 for i in range(3) if guess[i] == candidate[i]])
                    ball_count = sum([1 for i in range(3) if candidate[i] in guess and candidate[i] != guess[i]])
                    if strike == strike_count and ball == ball_count:
                        cnt+=1
                        
                if cnt == N:
                    answer += 1
    
    return answer  
        
    
    
    

N  = int(sys.stdin.readline().rstrip())
print(solution(N))