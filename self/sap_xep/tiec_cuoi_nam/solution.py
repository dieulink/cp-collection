a = list(input())
a.extend(list(input()))
b = list(input())

a.sort()
b.sort()
if a == b:
    print('YES')
else:
    print('NO')


