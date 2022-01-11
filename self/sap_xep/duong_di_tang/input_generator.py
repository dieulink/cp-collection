import random
import string


def rand_int(vmin, vmax):
    return random.randint(vmin, vmax)


def rand_double(vmin, vmax):
    return random.uniform(vmin, vmax)


def rand_list(len, vmin, vmax, distinct = False):
    if not distinct:
        res = []
        for i in range(0, len):
            res.append(rand_int(vmin, vmax))
        return res
    else:
        return random.sample(range(vmin, vmax+1), len)


def rand_str(length, seed=string.ascii_lowercase):
    return ''.join(random.choices(seed, k=length))


# nhập vào một số nguyên dương duy nhất là số thứ tự của test case, bắt đầu từ 1
test_number = int(input())

# print("Generating testcase #%02d" % test_number)
if test_number <= 5:
    # test case ngẫu nhiên cho sub 1
    Nmax = 10
    Mmax = 20
    Wmax = 20
else:
    # test case ngẫu nhiên cho sub 2
    Nmax = 300000
    Mmax = 300000
    Wmax = 100000

###
from collections import defaultdict

class Graph():
    def __init__(self,vertices):
        self.graph = defaultdict(list)
        self.V = vertices

    def addEdge(self,u,v):
        self.graph[u].append(v)

    def isCyclicUtil(self, v, visited, recStack):

        # Mark current node as visited and 
        # adds to recursion stack
        visited[v] = True
        recStack[v] = True

        # Recur for all neighbours
        # if any neighbour is visited and in 
        # recStack then graph is cyclic
        for neighbour in self.graph[v]:
            if visited[neighbour] == False:
                if self.isCyclicUtil(neighbour, visited, recStack) == True:
                    return True
            elif recStack[neighbour] == True:
                return True

        # The node needs to be poped from 
        # recursion stack before function ends
        recStack[v] = False
        return False

    # Returns true if graph is cyclic else false
    def isCyclic(self):
        visited = [False] * (self.V + 1)
        recStack = [False] * (self.V + 1)
        for node in range(self.V):
            if visited[node] == False:
                if self.isCyclicUtil(node,visited,recStack) == True:
                    return True
        return False
###
class ResEdge:
    u = 0
    v = 0
    w = 0

n = 0
m = 0
edges = list()

flag = True
while flag:
    print("Creating new graph!")
    edges.clear()
    
    n = rand_int(2, Nmax)
    m = min(n * (n - 1), rand_int(1, Mmax))

    g = Graph(n)

    for i in range(0, m):
        u = rand_int(1, n)
        v = rand_int(1, n)
        while (u == v):
            v = rand_int(1, n)
        w = rand_int(1, Wmax)
        curr_edge = ResEdge()
        curr_edge.u = u
        curr_edge.v = v
        curr_edge.w = w
        edges.append(curr_edge)
        g.addEdge(u, v)

    if g.isCyclic() == 1:
        print("Cycle detected!")
        flag = True
    else:
        print("No cycle!")
        flag = False

print(n, m)

for edge in edges:
    print(edge.u, edge.v, edge.w)
