# Chọn đồng đội

Linh đang muốn tham gia cuộc thi lập trình do Ucode tổ chức nhưng cuộc thi lại quy định hình thức thi theo đội $3$ người nên Linh muốn chọn trong $n$ người bạn mà mình biết để cùng Linh lập thành đội $3$ người. Những người bạn của Linh mỗi người có một tốc độ giải bài $a_i$ nên Linh sẽ chọn ra hai người có tốc độ giải bài nhanh nhất. Hãy giúp Linh tìm ra hai người đó nhé.

***Yêu cầu:*** Bạn sẽ giải quyết bài toán với $q$ truy vấn, mỗi truy vấn bạn được cho danh sách tốc độ giải bài của $n$ người bạn. Bạn sẽ đưa ra tổng thời gian giải bài nhỏ nhất của hai người Linh chọn ở từng truy vấn.

## Input

- Dòng đầu tiên là số nguyên dương $q$ là số truy vấn cần giải quyết, mỗi truy vấn có dạng:
    - Dòng đầu tiên gồm số nguyên dương $n$ - số người bạn Linh quen biết.
    - Dòng tiếp theo gồm $n$ số nguyên $a_1, a_2, a_3, \dots, a_n$ với $a_i$ là thời gian giải bài của người bạn thứ $i$.

## Constraints

- $1 \le q \le 10$.
- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^6$.

## Subtasks

- Subtask $1$: $25\%$ số điểm thỏa mãn:
    - $1 \le n \le 20$.
    - $1 \le a_i \le 50$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, mỗi dòng là kết quả của truy vấn thứ $i$.

## Sample Input

```
1
4
5 1 3 4
```

## Sample Output

```
4
```

## Explaination

Tổng thời gian của hai người nhanh nhất Linh chọn là $3 + 1 = 4$.
