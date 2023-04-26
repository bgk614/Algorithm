a = int(input())
l = list(map(int, input().split()))
l.sort()
print(l[0] * l[a-1])