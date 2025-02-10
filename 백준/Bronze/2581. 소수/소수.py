def is_prime(M,N):
    count = 0
    prime_numbers = []
        
    for x in range(M,N+1):
        if x ==1:
            continue
        
        prime = True
        
        
        for i in range(2,int(x**0.5)+1):
            if x % i == 0:
                prime = False
                break

        if prime:
            count += x
            prime_numbers.append(x)
    
       
    if prime_numbers == []:
        print(-1)
    else:
        print(count)
        print(prime_numbers[0])
            
   

M = int(input())
N = int(input())

is_prime(M,N)