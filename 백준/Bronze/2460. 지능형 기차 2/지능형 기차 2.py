max, passenger = 0, 0

for _ in range(10):
    a, b = map(int, input().split())
    passenger += (b - a)
    if max < passenger:
        max = passenger

print(max)