def is_prime_number(N):
    count = 0
    numbers = list(map(int, input().split()))
    for x in numbers:
        
        if x == 1:
            continue
        
        prime = True
        
        for i in range(2,int(x**0.5)+1):
            if x % i == 0:
                prime =  False
                break
            
        if prime:
            count += 1
        
    return count

        
    
    
    
    
    
N = int(input())
print(is_prime_number(N))