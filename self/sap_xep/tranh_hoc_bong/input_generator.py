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
    Rmax = 10
    Bmax = 20
    AVGmax = 100
else:
    # test case ngẫu nhiên cho sub 2
    Nmax = 100000
    Rmax = 1000000000
    Bmax = 200000
    AVGmax = 1000000

n = rand_int(1, Nmax)
r = rand_int(1, Rmax)
avg = rand_int(1, min(r, AVGmax))

print(n, r, avg)

for i in range(0, n):
    a = rand_int(1, r)
    b = rand_int(1, Bmax)
    print(a, b)