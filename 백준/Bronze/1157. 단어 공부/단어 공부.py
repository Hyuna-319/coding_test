n = input().upper()  
char_count = {}


for char in n:
    if char in char_count:
        char_count[char] += 1
    else:
        char_count[char] = 1


max_count = 0
most_char = None
multi = False  

for char, count in char_count.items():
    if count > max_count:
        most_char = char
        max_count = count
        multi = False  
    elif count == max_count:
        multi = True  


if multi:
    print("?")
else:
    print(most_char)
