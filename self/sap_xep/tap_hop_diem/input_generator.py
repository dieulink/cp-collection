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
    Nmax = 20
    Xmax = 40
    Kmax = 20
else:
    # test case ngẫu nhiên cho sub 2
    Nmax = 200000
    Xmax = 1000000000
    Kmax = 1000000000

db = {}
n = rand_int(1, Nmax)

print(n)

for i in range(0, n):
    x = rand_int(0, Xmax)
    k = rand_int(1, Kmax)

    flag = True
    while flag:
        if x not in db:
            db[x] = 1
            flag = False
        else:
            x = rand_int(0, Xmax)

    print(x, k)