height = [int(input()) for _ in range(9)]
for i in height:
    if len(height) == 7:
        break
    for j in height:
        if 100 == sum(height) - (i + j):
            if j == i:
                continue
            height.remove(j)
            height.remove(i)
            break
height.sort()
print(*height, sep='\n')