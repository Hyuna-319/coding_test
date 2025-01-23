T = int(input())
num = []
for i in range (1,T+1):

    A,B = map(int, input().split())
    answer = A + B
    num.append(answer)
    
for i in num:
    print(i)