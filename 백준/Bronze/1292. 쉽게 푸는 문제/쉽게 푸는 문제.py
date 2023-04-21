a, b = map(int, input().split())
list = [0]
for i in range(1, b+1):
    for j in range(i):
        list.append(i)
print(sum(list[a:b+1]))