ans=[]
for _ in range(int(input())):
    n, d = map(int, input().split())
    arr = sorted(map(int, input().split()))
    if arr[-1] <= d or sum(arr[:2]) <= d:
        ans.append('YES')
    else:
        ans.append('NO')
print('\n'.join(ans))