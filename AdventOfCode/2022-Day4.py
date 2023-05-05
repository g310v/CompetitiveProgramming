ans = 0

while True:
    inp = input()
    if inp == "":
        break
    first_range, second_range = inp.split(',')
    first_range, second_range = list(map(int, first_range.split('-'))), list(map(int, second_range.split('-')))
    diff = min(first_range[1], second_range[1]) - max(first_range[0], second_range[0])
    if diff >= 0:
        ans += 1

print(ans)