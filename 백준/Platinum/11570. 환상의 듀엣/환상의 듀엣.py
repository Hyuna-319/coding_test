import sys

def solve_duet(N, a):
    dp = [[sys.maxsize] * (N+1) for _ in range(N+1)]
    dp[0][1] = dp[1][0] = 0  

    for i in range(N+1):
        for j in range(N+1):
            next_pos = max(i, j) + 1
            if next_pos < N+1:
                if i==0 or j==0:
                    a[0]=a[next_pos]
                dp[next_pos][j] = min(dp[next_pos][j], dp[i][j] + abs(a[next_pos] - a[i]))
                dp[i][next_pos] = min(dp[i][next_pos], dp[i][j] + abs(a[next_pos] - a[j]))


    result = sys.maxsize
    for i in range(N+1):
        result = min(result, dp[i][N], dp[N][i])
    
    return result


N = int(input())
a = [0]+list(map(int, input().split()))


print(solve_duet(N, a))