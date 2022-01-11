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
    Nmax = 15
    Mmax = 20
    Rmax = 50
    Amax = 50
else:
    # test case ngẫu nhiên cho sub 2
    Nmax = 200000
    Mmax = 200000
    Rmax = 1000000000000000000
    Amax = 1000000000000000000

n = rand_int(2, Nmax)
m = rand_int(1, Mmax)
pos = rand_list(2 * n, 1, Rmax, True)
pos = sorted(pos)

print(n, m)

for i in range(0, len(pos), 2):
    print(pos[i], pos[i + 1])

lens = rand_list(m, 1, Mmax)

for lenght in lens:
    print(lenght, end = " ")
print()
