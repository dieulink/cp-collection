def giai_thua(n):
    if(n == 0): return 1
    else: return (giai_thua(n - 1) * n) % (10**9 + 7) 

n = int(input())
print(giai_thua(n))