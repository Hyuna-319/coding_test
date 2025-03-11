

n = int(input())


for _ in range(n):
    number = int(input())
    dp = [0]*(number+1)
    for idx in range(1,number+1):
    
        if idx == 1:
            dp[idx] = 1
        elif idx == 2:
            dp[idx] = 2
        elif idx == 3:
            dp[idx] = 4
        else:
            dp[idx] = dp[idx-1]+dp[idx-2]+dp[idx-3]
    

    print(dp[number])