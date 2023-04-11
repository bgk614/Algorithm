n = int(input())
num = list(map(int, input().split()))
min = num[0]
max = num[0]

for i in range(0, n):
    if int(num[i] < min):
        min = num[i]
    if int(num[i] > max):
        max = num[i]
        
print(min, max)