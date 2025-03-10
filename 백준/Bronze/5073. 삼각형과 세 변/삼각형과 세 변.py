import sys



while True:
    
    line = list(map(int, sys.stdin.readline().split()))
    
    
        
    if line == [0, 0 ,0]:
        break
    
    line.sort(reverse=True)
    
    
    if line[0] >= line[1] + line[2]:
        print("Invalid")
    
    elif line[0] == line[1] == line[2]:
        print("Equilateral")

        
    elif line[0] == line[1] or line[1] == line[2] or line[2] == line [0]:
        print("Isosceles")
    else:
        print("Scalene")
    

