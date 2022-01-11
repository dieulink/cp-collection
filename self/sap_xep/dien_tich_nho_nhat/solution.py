n = int(input())
a = list(map(int,input().split()))

a.sort()

f = min([(a[n + i - 1] - a[i]) for i in range(n)]) * (a[-1] - a[0])
print(min((a[-1] - a[n]) * (a[n - 1] - a[0]), f))