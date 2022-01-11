# Nối cầu gỗ

Hiếu đang chơi một trò chơi xây cầu như sau: có $n$ cây cầu được xếp thành một hàng ngang. Cây cầu thứ $i$ có tọa độ $(l_i, r_i)$ sao cho $r_i < l_{i + 1} \; \forall 1 \le i \le n - 1$.

Hiếu cần phải đi đến đích nên cậu muốn đặt những ván gỗ để đi qua những cây cầu liên tiếp nhau. Một ván gỗ có chiều dài $a$ có thể đăt giữa cây cầu thứ $i$ và thứ $i + 1$ nếu tồn tại cặp tọa độ $(x, y)$ thỏa mãn $l_i \le x \le r_i, \; l_{i + 1} \le y \le r_{i + 1}$ và $y - x = a$.

Hiếu được cho $m$ ván gỗ mỗi ván gỗ chỉ được dùng một lần. Hãy giúp Hiếu xác định thử xem nếu cậu có thể đi đến cây cầu cuối cùng hay không?

***Yêu cầu:*** Bạn được cho tọa độ của $n$ cây cầu và chiều dài của $m$ ván gỗ hãy giúp Hiếu xác định xem cậu có thể đi đến cây cầu cuối cùng không.

## Input

- Dòng đầu tiên là hai số nguyên $n$ và $m$ là số lượng cây cầu và số ván gỗ mà Hiếu được cho sẵn.
- $n$ dòng tiếp theo mỗi dòng gồm $2$ số $l_i$ và $r_i$ là tọa độ của cây cầu thứ $i$.
- Dòng cuối cùng là $m$ số nguyên $a_1, a_2, a_3, \dots, a_m$ là chiều dài những ván gỗ mà Hiếu được cung cấp.

## Constraints

- $2 \le n \le 2 \cdot 10^5$.
- $1 \le m \le 2 \cdot 10^5$.
- $1 \le l_i \le r_i \le 10^18$.
- $1 \le a_i \le 10^18$.

## Output

- Nếu Hiếu không thể đặt những ván gỗ giữa những cây cầu và đi đến cuối thì in `No`. Ngược lại thì in `Yes` và dòng tiếp theo sẽ in ra $n - 1$ số nguyên $b_1, b_2, b_3, \dots, b_{n - 1}$ với $b_i$ là ván gỗ thứ $b_i$ được sử dụng để đặt lên cây cầu thứ $i$ và $i + 1$.
- Nếu có nhiều kết quả thì hãy in một kết quả bất kì.

## Sample input 1

```
4 4
1 4
7 8
9 10
12 14
4 5 3 8
```

## Sample output 1

```
Yes
2 3 1
```

## Explanation 1

Hiếu có thể đặt ván gỗ thứ $2$ giữa điểm $3$ và $8$, đặt ván gõ thứ $3$ giữa điểm $7$ và $10$ và đặt ván gỗ thứ nhất giữa điểm $10$ và $14$.

## Sample input 2

```
2 2
11 14
17 18
2 9
```

## Sample output 2

```
No
```

## Explanation 2

Ván gỗ đầu tiên quá ngắn mà ván gỗ thứ $2$ lại quá dài nên Hiêu không thể đặt được.
