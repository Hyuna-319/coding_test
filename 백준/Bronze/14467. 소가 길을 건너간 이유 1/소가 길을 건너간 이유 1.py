def is_crorss(N):
    sum_count= {}
    result = 0 
    for _ in range(N):
        caw, num = map(int, input().split())
        if caw not in sum_count:
            sum_count[caw] = []
        sum_count[caw].append(num)
    for k, v in  sum_count.items():
        count= sum(1 for i in range(len(v)-1) if v[i] != v[i+1])
        result += count

            
    return result



N = int(input())
print(is_crorss(N))