query = int(input())

while query:
    query = query - 1

    inp = list(map(int, input().split(" ")))
    n = inp[0]
    k = inp[1]
    a = list(map(int, input().split(" ")))

    s = 0
    s1 = 0
    s2 = 0
    a = sorted(a)
    for x in a: 
        s = s + x
    for i in range(0, k):
        s1 = s1 + a[0 + i]
    id = n - 1
    while k:
        k = k - 1
        s2 = s2 + a[id]
        id = id - 1
    
    print(max(abs(s1 - (s - s1)), abs(s2 - (s - s2))))