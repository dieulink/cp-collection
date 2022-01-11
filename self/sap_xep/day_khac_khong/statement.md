# Dãy khác không

Tuy đã sang năm mới nhưng cận kề là những bài kiểm tra cuối kì của các học sinh Ucode. Để làm nóng người thầy Tuân quyết định ra một bài tập cho các bạn học sinh ở Ucode như sau: Cho một dãy số $A$ gồm $N$ phần tử $a_1, a_2, a_3, \dots, a_N$. Dãy $B$ thu được từ dãy $A$ bằng cách thay đổi vị trí các phần tử trong dãy $A$ mà không thay đổi đến giá trị. Nói cách khác dãy $B$ là một hoán vị của dãy $A$. Các học sinh ở Ucode đều là con ngoan trò giỏi nên sẽ không thích số $0$. Vì vậy thầy muốn các bạn học sinh ở Ucode hãy suy nghĩ và tạo ra dãy $B$ sao cho tổng của $k$ phần tử đầu tiên trong dãy khác $0$ với mọi $k = 1, 2, \dots, N$. Nói cách khác hãy tìm dãy $B$ thỏa:
$$b_1 + b_2 + b_3 + \dots + b_k \neq 0 \; \forall k = 1, 2, \dots, N$$.

***Yêu cầu:*** Bạn sẽ giải quyết bài toán với nhiều truy vấn, mỗi truy vấn gồm một số nguyên $N$ là số phần tử của dãy số $A$ và dãy số $A$. Bạn hãy tìm dãy số $B$ thỏa mãn đề bài.

## Input

- Dòng đầu tiên là số nguyên dương $q$ là số truy vấn cần giải quyết. Mỗi truy vấn có dạng:
    - Đòng đầu tiên là số nguyên dương $N$ là số phần tử của dãy $A$.
    - Dòng tiếp theo là $N$ số nguyên $a_1, a_2, a_3, \dots, a_N$.

## Constraints

- $1 \le q \le 1000$.
- $1 \le N \le 50$.
- $-50 \le a_i \le 50$.

## Subtasks

- Subtask $1$ ($50\%$) số điểm có $1 \le q \le 10, \; 1 \le N \le 10$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Mỗi truy vấn, nếu tìm ra được dãy $B$ thỏa mãn hãy in `YES` và xuống hàng in dãy $B$ bất kì. Ngược lại nếu không tồn tại dãy $B$ hãy in `NO`.

## Sample input

```
4
4
1 -2 3 -4
3
0 0 0
5
1 -1 1 -1 1
6
40 -31 -9 0 13 -40
```

## Sample output

```
YES
1 -2 3 -4
NO
YES
1 1 -1 1 -1
YES
-40 13 40 0 -9 -31
```

## Explanation

Truy vấn $1, 3, 4$ ta đều có thể tìm ra một dãy $B$ thỏa mãn, riêng dãy truy vấn $2$ thì mọi phần tử đều là $0$ nên không thể tạo ra dãy $B$ thỏa mãn.