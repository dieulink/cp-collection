class Candidate:
    id = ""
    point = 0
    submit = 0

    def show(__main__):
        print(__main__.id, __main__.point, __main__.submit)

def partition(f, start, end, cmp):
    pivot = f[start]
    low = start + 1
    high = end

    while True:
        while low <= high and cmp(f[high], pivot): high = high - 1
        while low <= high and not cmp(f[low], pivot):low = low + 1
        if low <= high:
            f[low], f[high] = f[high], f[low]
        else:
            break
    f[start], f[high] = f[high], f[start]
    return high

def quick_sort(f, start, end, cmp):
    if start >= end:
        return
    p = partition(f, start, end, cmp)
    quick_sort(f, start, p-1, cmp)
    quick_sort(f, p+1, end, cmp)

candidates = []
n = int(input())
target = Candidate()
target.id = input()

for i in range(0, n):
    inp = list(input().split())
    x = Candidate()
    x.id = inp[0]
    x.point = inp[1]
    x.submit = inp[2]
    candidates.append(x)

quick_sort(candidates, 0, len(candidates) - 1, lambda x, y: (x.point < y.point) or (x.point == y.point and x.submit < y.submit))

for candidate in candidates:
    candidate.show()

res = False
for i in range(0, 6):
    if candidates[i].id == target.id:
        res = True
        break;
if res:
    print("YES")
else:
    print("NO")