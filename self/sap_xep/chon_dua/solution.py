inp = list(map(int, input().split(" ")))
n = int(inp[0])
d = int(inp[1])
a = list()
for i in range(0, n):
    x = int(input())
    a.append(x)

a = sorted(a)

cnt = 0
i = 0
while i < n - 1:
    if a[i] >= a[i + 1] - d:
        cnt = cnt + 1
        i = i + 2
    else:
        i = i + 1

print(cnt)