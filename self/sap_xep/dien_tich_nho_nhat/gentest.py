# Viết file input_generator.py bình thường xong copy vào gentest.py.
# Sửa các print() thành output_file.write() để viết inp vào testcases.txt
# và thêm cpp_input.write() để viết input.inp
# Sol c++ thêm dòng sau:
# freopen ("input.inp", "r", stdin); freopen ("testcases.txt", "a", stdout);

import os

current_output_file_path = os.getcwd() + "/testcases.txt"
output_file_exist = os.path.exists(current_output_file_path)

if output_file_exist == False:
    os.system("touch testcases.txt")
    print("`testcases.txt` is created!")
else:
    print("`testcases.txt` exist!")
    os.system("mv testcases.txt testcases-old.txt")
    print("`testcases-old.txt` is created containing old testcases!")
    os.system("touch testcases.txt")
    print("A new `testcases.txt` is created!")

###

number_of_testcase = 20

for test_th in range(1, number_of_testcase + 1):

    test_number_th = ""
    if test_th < 10:
        test_number_th = test_number_th + "0"
    test_number_th = test_number_th + str(test_th)

    print("Working on test " + test_number_th)
    with open("testcases.txt", "a") as output_file:
        output_file.write("### Test #" + test_number_th + "\n")

        ##################################################################   Input_generator.py
        print("Creating input!")
        with open("input.inp", "w") as cpp_input:
            ###################################################################################

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
            test_number = test_th

            # print("Generating testcase #%02d" % test_number)
            if test_number <= 5:
                # test case ngẫu nhiên cho sub 1
                Nmax = 10
                Amax = 50
            else:
                # test case ngẫu nhiên cho sub 2
                Nmax = 100000
                Amax = 100000000

            n = rand_int(1, Nmax)
            a = rand_list(2 * n, 1, Amax)

            output_file.write(str(2 * n) + "\n")
            cpp_input.write(str(2 * n) + "\n")

            for x in a:
                output_file.write(str(x) + " ")
                cpp_input.write(str(x) + " ")
            output_file.write("\n")
            cpp_input.write("\n")

            ###################################################################################

        #######################################################################################

        output_file.write("---\n")

    ##################################################################   Solution.cpp

    print("Creating Output!")
    os.system("make solution && ./solution")

    ####################################################################################### 

    print("=================>Test " + test_number_th + " created!\n")

print(number_of_testcase, "testcases created!. Program completed!")
