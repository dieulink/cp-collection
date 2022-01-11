query = int(input())

for qq in range(0, query):
    n = int(input())
    a = list(map(int, input().split(" ")))
    a = sorted(a)

    print(a[0] + a[1])
