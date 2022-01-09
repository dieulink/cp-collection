class Candidate:
    id = ""
    point = 0
    submit = 0


def quick_sort(f, l, r):
    i = l
    j = r
    pivot = int((l + r) // 2)
    while i <= j:
        while(f[i].point > f[pivot].point) or (f[i].point == f[pivot].point and f[i].submit > f[pivot].submit):
            i = i + 1
        while(f[j].point < f[pivot].point) or (f[j].point == f[pivot].point and f[j].submit < f[pivot].submit):
            j = j - 1
        if i <= j:
            f[i], f[j] = f[j], f[i]
            i = i + 1
            j = j - 1

        if l < j:
            quick_sort(f, l, j)
        if i < r:
            quick_sort(f, i, r)

candidates = []
n = int(input())
target = Candidate()
target.id = input()

for i in range(0, n):
    inp = list(input().split(" "))
    x = Candidate()
    x.id = inp[0]
    x.point = inp[1]
    x.submit = inp[2]
    candidates.append(x)

quick_sort(candidates, 0, n - 1)

res = False
for i in range(0, 6):
    if candidates[i].id == target.id:
        res = True
        break;
if res:
    print("YES")
else:
    print("NO")