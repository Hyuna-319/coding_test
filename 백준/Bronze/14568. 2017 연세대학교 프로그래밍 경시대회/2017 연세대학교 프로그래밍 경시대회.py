


def candy(N):
    count = 0
    for 택희 in range(1,N+1):
        for 영훈 in range(1,N+1):
            for 남규 in range(1,N+1):
                if N == 택희 + 영훈 + 남규:
                    if 남규 >= 영훈+2:
                        if 택희 % 2 ==0:
                            count +=1
    return count





N = int(input())
print(candy(N))