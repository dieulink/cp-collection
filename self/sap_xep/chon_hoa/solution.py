query = int(input())

for qq in range(0, query):
    n = int(input())
    a = list(map(int, input().split(" ")))

    a = sorted(a)
    ans = 10000000000007
    for i in range(0, n - 1):
        ans = min(ans, a[i + 1] - a[i])
    print(ans)