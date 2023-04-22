m = int(input())
n = int(input())
sum, min = 0, n

for i in range(m, n+1):
    prime = True
    if i > 1:
        for j in range(2, i):
            if i % j == 0: # 소수 아님
                prime = False
                break
        if prime:
            sum += i
            if min > i:
                min = i
            
if sum == 0:
    print(-1)
else:
    print(sum, sep='\n')
    print(min)