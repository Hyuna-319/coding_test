
def solution(a):
    answer = []
    for i in a:
        answer.append(i)
    if answer == answer[::-1]:
        return 1
    else:
        return 0
a = str(input())    
print(solution(a))