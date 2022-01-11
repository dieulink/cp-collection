# import math
from collections import Counter, deque, defaultdict
from math import *

from bisect import bisect_right
mod = 1000000007


# from functools import reduce
# from itertools import permutations
# import queue



def solve():
    n,r,av=map(int,input().split())
    cur=0
    l=[]
    for i in range(n):
        a,b=map(int,input().split())
        l.append([a,b])
        cur+=a
    if cur>=n*av:
        print(0)
        return
    req=n*av-cur
    ans=0
    l.sort(key=lambda x:x[1])
    for i in l:
        if i[0]<r:
            if r-i[0]>=req:
                ans+=req*i[1]
                req=0
            else:
                ans+=(r-i[0])*i[1]
                req-=r-i[0]
        if req<=0:
            print(ans)
            return










# t = int(input())
t = 1
for num in range(t):
    # print("Case #{}: ".format(num + 1), end="")
    solve()
 				 	   		  		 	 	 			 	 				