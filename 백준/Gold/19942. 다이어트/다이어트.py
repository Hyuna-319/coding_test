import sys


def recur(idx, p, f, s, v, c):
    global total_price, used, answer_used
    

    
    if mininum[0] <= p and mininum[1]<= f and mininum[2]<=s and mininum[3] <= v :
        if total_price > c :
            total_price = min(total_price, c)
            answer_used = []
            for i in used:
                answer_used.append(i)
    if idx == n:
        return
    
    used.append(idx + 1)
    

    recur(idx +1 , p + ingre[idx][0], f + ingre[idx][1], s+ingre[idx][2], v + ingre[idx][3], c + ingre[idx][4])
    used.pop()
    recur(idx + 1, p, f, s, v,c)

    


n = int(input())
mininum = list(map(int, sys.stdin.readline().split()))
ingre = [list(map(int, sys.stdin.readline().split())) for _ in range (n)]

total_price = 1e9
used = []
answer_used = []
recur(0,0,0,0,0,0)

answer_used.sort()

if answer_used:
    print(total_price)
    print(*answer_used)
else:
    print(-1)