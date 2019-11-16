n = int(input())
A = [int(_) for _ in input().split()]
result=0

for i in range(n):
    A[i] -= min(A)

