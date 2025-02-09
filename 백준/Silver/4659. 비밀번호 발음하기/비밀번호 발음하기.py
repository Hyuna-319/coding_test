


def solution(word):
    vowel="aeiou"
    if not any(char in word for char in vowel):
        return f"<{word}> is not acceptable."

    vowel_count = 0
    consonant_count = 0    
      
    for i in range(len(word)):
        if word[i] in vowel:
            vowel_count += 1
            consonant_count=0
        else:
            vowel_count = 0
            consonant_count += 1
            
        if vowel_count >= 3 or consonant_count >=3 :
            return f"<{word}> is not acceptable."

        
    for i in range(len(word)-1):
        if word[i] == word[i+1] and word[i:i+2] not in ("ee", "oo"):
            return f"<{word}> is not acceptable."
        
    return f"<{word}> is acceptable."
            

    
while True:
    word = str(input())
    if word == "end":
        break
    print(solution(word))