import random
import string
import os


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


def rand_double():
    def get_num_length(x):
        result = 0
        while x >= 1:
            x = x / 10
            result = result + 1
        return result


    a = rand_int(1, 99999)
    len_a = get_num_length(a)
    return (a / pow(10, len_a))


def output_stream(output_string, stream = "file"):
    if stream == "file":
        output_file.write(output_string + "\n")
    elif stream == "console":
        print(output_string)
    else:
        print("function's argument error!")


with open("input.txt", "w") as output_file:
    query = 10
    output_stream(str(query))

    for qq in range(0, query):
        n = 100000
        k = rand_double()
        output_stream(str(n) + " " + str(k))
        a = []
        for i in range(0, n):
            a.append(rand_double())
        out = ""
        for i in range(0, n):
            out = out + str(a[i])
            if i < n - 1:
                out = out + " "
        output_stream(out)
