# Giúp bạn

Minh đang đi lấy tài liệu về cho lớp ôn thi đại học. Minh mang trên tay một chồng gồm $n$ tập tài liệu, mỗi tập tài liệu nặng $w_i$ gram. Tình cờ, Trang đi ngang và muốn giúp Minh một tay. Minh đồng ý nhưng cậu không muốn Trang phải mang nặng quá nhiều nên cậu đề xuất chia thành $2$ chồng trong đó có một chồng có đúng $k$ tài liệu. Minh sẽ cố gắng đưa cho Trang chồng nhẹ hơn. 

***Yêu cầu:*** Bạn sẽ trả lời $q$ truy vấn, mỗi truy vấn bạn sẽ đưa ra độ chênh lệch khối lượng tối đa giữa Minh và Trang sẽ là bao nhiêu.

## Input

- Dòng đầu tiên là số nguyên dương $q$ - số truy vấn bạn cần trả lời. Mỗi truy vấn có dạng:
    - Dòng đầu tiên là $2$ số nguyên $n$ và $k$.
    - Dòng tiếp theo gồm $n$ số nguyên $a_1, a_2, a_3, \dots, a_n$ là khối lượng của tập tài liệu thứ $i$.

## Constraints

- $1 \le q \le 10$.
- $1 \le k \le n \le 100$.
- $1 \le w_i \le 10^5$.

## Subtasks

- Subtask $1$: $25\%$ số điểm thỏa mãn:
    - $1 \le k \le n \le 10$.
    - $1 \le w_i \le 100$.

## Output

- Gồm $q$ dòng, mỗi dòng là kết quả bài toán.

## Sample Input

```
2
5 2
8 4 5 2 10
8 3
1 1 1 1 1 1 1 1
```

## Sample Output

```
17
2
```

## Explaination

- Ở truy vấn $1$ Minh sẽ đưa cho Trang tập tài liệu nặng $4$ và $2$ gram còn cậu sẽ mang số còn lại. Nên độ chênh lệch lớn nhất sẽ là $(8 + 5 + 10) - (4 + 2) = 17$.
- Ở truy vấn $2$ Minh sẽ đưa cho Trang $3$ tập tài liệu và Minh sẽ mang $5$ tập. Độ chênh lệch lớn nhất sẽ là $5 - 3 = 2$.
