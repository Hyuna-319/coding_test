import sys

arr = []

for i in range(5):
    x = int(input())
    arr.append(x)


arr.sort()

result = sum(arr)

    
avg = int(result / 5)  
mid =  arr[2]

print(avg)
print(mid)