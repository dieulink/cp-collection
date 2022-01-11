t = int(input())
ans = []

for _ in range(t):
    n = int(input())
    a = input().split()
    pos = []
    neg = []
    zer = 0
    s = 0
    for w in a:
        v = int(w)
        if v < 0:
            neg.append(w)
        elif v > 0:
            pos.append(w)
        else:
            zer += 1
        s += v
    if s == 0:
        ans.append("NO")
    else:
        ans.append("YES")
        z = ' '.join(['0'] * zer)
        if s > 0:
            ret = ' '.join([' '.join(pos), z, ' '.join(neg)])
        else:
            ret = ' '.join([' '.join(neg), z, ' '.join(pos)])
        ans.append(ret)

print('\n'.join(ans))