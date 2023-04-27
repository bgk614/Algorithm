x, y, w, h = map(int, input().split())
l = list(map(int, (x, y, (w-x), (h-y))))
l.sort()
print(l[0])