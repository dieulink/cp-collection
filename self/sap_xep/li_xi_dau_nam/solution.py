n=int(input())
a=[int(x) for x in input().split()]
m=int(input())
b=[int(x) for x in input().split()]
ans=[]
for i in range(n):
    for j in range(m):
        if a[i]+b[j] not in a and a[i]+b[j] not in b:
            ans.append(a[i])
            ans.append(b[j])
            break
print(ans[0],ans[1])