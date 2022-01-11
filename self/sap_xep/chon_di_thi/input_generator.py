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
    Pmax = 50
    Qmax = 50
elif test_number <= 10:
    # test case ngẫu nhiên cho sub 2
    Nmax = 1000
    Pmax = 1000
    Qmax = 1000
else:
    # test case ngẫu nhiên cho sub 3
    Nmax = 100000
    Pmax = 1000
    Qmax = 1000000

letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
n = rand_int(7, Nmax)
candidate_id_dict = {}
candidate_id_list = [] * n

for i in range(0, n):
    flag = True
    while flag:
        candidate_id = rand_str(4, letters)
        if candidate_id not in candidate_id_dict:
            candidate_id_dict[candidate_id] = 1
            candidate_id_list.append(candidate_id)
            flag = False

tuan_id = candidate_id_list[rand_int(0, n - 1)]
print(n)
print(tuan_id)

candidate_point_list = rand_list(n, 1, Pmax)
candidate_submit_list = rand_list(n, 1, Qmax, True)

for i in range(0, n):
    print(candidate_id_list[i], candidate_point_list[i], candidate_submit_list[i])
