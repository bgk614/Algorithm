T = int(input())

A = [[*map(int, input().split())] for _ in range(T)]

for i in range(len(A)):
    A[i] = sorted(A[i])

for i in range(T):
    print(A[i][7])