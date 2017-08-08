def firstNotRepeatingCharacter(s):
    seen = [0]*27
    c = 0
    for i in s:
        if seen[ord(i)%97] == 0:
            c += 1
            seen[ord(i)%97] = c
        elif seen[ord(i)%97] != 0 :
            seen[ord(i)%97] = -1
    print(seen)
    c = max(seen)
    index = -1
    print(c)
    for i in range(27):
        if seen[i] > 0:
            if c >= seen[i] :
                print(i)
                c = seen[i]
                index = i
    print("c = " + str(c))
    print("index = " +str(index))
    if c > 0:
        return chr(index+97)
    else:
        return '_'

s = "abacabad"
print(firstNotRepeatingCharacter(s))
