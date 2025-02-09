import sys

def solution(N):
    stack = []
    for _ in range(N):
        x = sys.stdin.readline().strip().split()
        
        if x[0] == "push":
            stack.append(x[1])
        elif x[0] == "top":
            print(stack[-1] if stack else -1)
        elif x[0] == "empty":
            print(0 if stack else 1)
        elif x[0] == "size":
            print(len(stack))
        elif x[0] == "pop":
            if stack ==[]:
                print(-1)
            else:
                remove = stack.pop(-1)
                print(remove)
            
            

            
            
N = int(sys.stdin.readline().rstrip())
solution(N)