inp = input()

s = set()

for i in range(len(inp) - 13):
    for j in range(14):
        s.add(inp[i + j])
    if (len(s) == 14):
        print(i + 14)
        break
    s.clear()


    

    
