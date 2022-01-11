# Sổ mua bán

Thầy Tuân vừa tham gia đầu tư vào tiền ảo. Thầy đọc sách và nghĩ ra một bài toán như sau: một đơn đặt hàng gồm hai thao tác mua hoặc bán ta kí hiệu là `B` hoặc `S`. Mỗi đơn hàng mua có dạng: `B p q` với `p` là giá tiền và `q` là số cổ phần. Tương tự, đơn hàng bán có dạng `S p q` với `p` là giá tiền và `q` là số cổ phần.

Những đơn đặt hàng có cùng thao tác (cùng mua/bán) và cùng giá tiền sẽ có thể được cộng dồn số cổ phần lại.

Thầy muốn tạo ra một cuốn sổ để mua bán sao cho tối ưu. Phần đầu của số mua bán là phần bán được sắp xếp theo chiều giảm dần giá tiền của các đơn hàng. Phần còn lại là các đơn hàng mua cũng được sắp xếp theo chiều giảm dần của giá tiền.

Thầy muốn sổ mua bán chỉ có $k$ đơn hàng mua đầu tiên và $k$ đơn hàng bán đầu tiên. Nếu số lượng đơn hàng mua hoặc bán bé hơn $k$ thì trong sổ sẽ chứa tất cả đơn hàng mua hoặc bán.

***Yêu cầu:*** Bạn được cho $N$ đơn hàng, hãy giúp thầy Tuân in ra cuốn sổ mua bán với $k$ đơn hàng mỗi loại nhé.

## Input

- Dòng đầu tiên là số nguyên dương $N$ và $k$.
- $N$ dòng tiếp theo mỗi dòng là một đơn hàng mua/bán. Có dạng `B p q` hoặc `S p q` tương ứng là đơn hàng mua hoặc bán.

## Constraints

- $1 \le N \le 1000$.
- $1 \le k \le 50$.
- $0 \le p_i \le 10^5$.
- $1 \le q_i \le 10^4$.

## Subtasks

- Subtask $1$ ($25\%$) số điểm có $1 \le N \le 10, \; $1 \le k \le 10, \; 0 \le p_i \le 20$ và $1 \le q_i \le 20$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Gồm $2k$ dòng, $k$ dòng đầu tiên là phần bán gồm $k$ đơn hàng và phần sau là phần mua gồm $k$ đơn hàng.

## Sample input

```
6 2
B 10 3
S 50 2
S 40 1
S 50 6
B 20 4
B 25 10
```

## Sample output

```
S 50 8
S 40 1
B 25 10
B 20 4
```

## Explanation

Bạn có $3$ đơn hàng mua $(10, 3); \; (20, 4); \; (25, 10)$ và $2$ đơn hàng bán $(50, 8); \; (40, 1)$. Bạn cần in ra hai đơn hàng mua tốt nhất nên bạn không nên in ra đơn hàng $(10, 3)$.