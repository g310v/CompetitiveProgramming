from collections import defaultdict
file = open('input.txt', 'r')
data = file.readlines()

SZ = defaultdict(int)
path = []
for line in data:
    cur = line.strip().split()
    if cur[1] == "cd":
        if cur[2] == "..":
            path.pop()
        else:
            path.append(cur[2])
    elif cur[1] == "ls":
        continue
    elif cur[0] == "dir":
        continue
    else:
        sz = int(cur[0])
        for i in range(1, len(path) + 1):
            SZ['/'.join(path[:i])] += sz

max_space = 70000000 - 30000000
total_space_taken = SZ['/']
need = total_space_taken - max_space

p1 = 0
p2 = 1e9
for k, v in SZ.items():
    if v <= 100000:
        p1 += v
    if v >= need:
        p2 = min(p2, v)
print(p1)
print(p2)