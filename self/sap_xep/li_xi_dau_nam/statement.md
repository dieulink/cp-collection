# Lì xì đầu năm

Hôm nay là tiết thực hành tin đầu năm mới. Thầy quyết định lì xì cho các bạn trong lớp một câu hỏi lấy điểm $10$. Đạt, Hiếu và Đô muốn một năm mới code xanh màu "Accept" nên quyết tâm sẽ cùng nhau giải bài này. Đè bài của thầy như sau: Cho bạn hai dãy số nguyên gồm $N$ phần tử và $M$ phần tử. Bạn được phép chọn ra một số $a$ bất kì thuộc dãy $A$ và một số $b$ bất kì thuộc dãy $B$ sau đó tính tổng $c = a + b$. Thầy muốn các bạn hãy đưa ra một cặp số $(a, b)$ như vậy sao cho số $c$ không được xuất hiện trong dãy $A$ hay dãy $B$. Vì một năm mới thuận lợi bạn hãy giúp $3$ người bạn này nhé.

***Yêu cầu:*** Cho $2$ dãy số $A$ và $B$ lần lượt gồm $N$ và $M$ phần tử. Hãy đưa ra một cặp số $(a, b)$ sao cho $a \in A, \; b \in B$ và $a + b = c \notin A, B$.

## Input

- Dòng đầu tiên là số nguyên dương $N$ - số lượng phần tử của dãy số $A$.
- Dòng tiếp theo là $N$ số nguyên dương $a_1, a_2, a_3, \dots, a_N$.
- Dòng tiếp theo là số nguyên dương $M$ - số lượng phần tử của dãy số $B$.
- Dòng tiếp theo là $M$ số nguyên dương $b_1, b_2, b_3, \dots, b_M$.

## Constraints

- $1 \le N \le 100$.
- $1 \le a_i \le 200$.
- $1 \le M \le 100$.
- $1 \le b_j \le 200$.

## Subtasks

- Subtask $1$ ($25\%$) số điểm có $1 \le N, M \le 10$ và $1 \le a_i, b_j \le 20$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Dòng duy nhất là cặp số nguyên $(a, b)$ thỏa điều kiện. Nếu có nhiều cặp, hãy in ra cặp có giá trị $c$ lớn nhất.

## Sample input 1

```
1
20
2
10 20
```

## Sample output 1

```
20 20
```

## Explanation 1

Trong ví dụ này ta có thể chọn cặp `20 20` vì $20 + 20 = 40$ không thuộc trong dãy $A$ hay $B$.

## Sample input 2

```
3
3 2 2
5
1 5 7 7 9
```

## Sample output 2

```
3 9 
```

## Explanation 2

Dễ thấy có rất nhiều cặp nhưng ta chỉ cần đưa ra cặp có giá trị $a + b = c$ lớn nhất nên chọn cặp `3 9`.
