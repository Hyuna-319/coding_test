import sys


def solution(N):
    people = []
    
    for _ in range(N):
        x,y = map(int, sys.stdin.readline().split())
        people.append((x,y))
    
    rank = [1]*len(people)
    for i in range(len(people)):
        for j in range(len(people)):
            if i == j :
                continue
            
            if people[j][0] > people[i][0] and people[j][1] > people[i][1]:
                rank[i] +=1
    
    answer = " ".join(map(str,rank))
    return answer
        
        
  
N = int(sys.stdin.readline().rstrip())
print(solution(N))