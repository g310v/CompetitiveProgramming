for i in range(10):
    inp = input()

stacks = [

['Z','P','M','H','R'],
['P','C','J','B'],
['S','N','H','G','L','C','D'],
['F','T','M','D','Q','S','R','L'],
['F','S','P','Q','B','T','Z','M'],
['T','F','S','Z','B','G'],
['N','R','V'],
['P','G','L','L','T','D','V','C','M'],
['W','Q','N','J','F','M','L']

]

while True:
    inp = input()
    if inp == "":
        break
    else:
        temp = []
        inp = inp.split()
        for i in range(int(inp[1])):
            cur = stacks[int(inp[3])-1].pop()
            temp.append(cur)
        for i in range(int(inp[1])):
            cur = temp.pop()
            stacks[int(inp[5])-1].append(cur)
    
for i in range(9):
    print(stacks[i][-1], end="")