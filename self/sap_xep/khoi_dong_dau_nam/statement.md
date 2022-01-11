# Khởi động đầu năm

Hôm nay là buổi học đầu tiên tại Ucode, Đạt cho các bạn cùng lớp một câu hỏi sau và sẽ lì xì cho những ai giải được câu đố này. Câu đố như sau: bạn được cho dãy số $A$ gồm $N$ số nguyên $a_1, a_2, \dots, a_N$ và số nguyên dương $k$. Bạn được chọn ra $3$ chỉ số $i, j, k$ sao cho $i \neq j, i \neq k, j \neq k$ và $1 \le i, j, k \le N$ sau đó bạn có thể gán cho $a_i$ tổng giá trị của hai phần tử $a_j$ và $a_k$. Nói cách khác bạn có thể thực hiện phép toán $a_i := a_j + a_k$. Đạt đố mọi người từ dãy số $A$ ban đầu mọi người có thể dùng phép biến đổi trên làm cho mọi phần tử của dãy $A$ đều bé hơn hoặc bằng $k$.

***Yêu cầu:*** Bạn sẽ giải quyết bài toán này dưới dạng $q$ truy vấn. Mỗi truy vấn là một bài toán nhỏ như sau: với dãy $A$ và số nguyên $k$. Sử dụng phép tính biến đối mọi phần tử trong dãy $A$ sao cho $a_i \le k \; \forall i : 1 \le i \le N$.

## Input

- Dòng đầu tiên là số nguyên dương $q$ là số truy vấn cần giải quyết. Mỗi truy vấn có dạng:
    - Dòng đầu tiên là hai số nguyên $N$ và $k$ là số phần tử của dãy $A$ và số nguyên $k$.
    - Dòng tiếp theo là $N$ số nguyên $a_1, a_2, \dots, a_N$ là các phần tử trong dãy $A$.

## Constraints

- $1 \le q \le 2000$.
- $3 \le N \le 300$.
- $1 \le k \le 100$.
- $1 \le a_i \le 100$.

## Subtasks

- Subtask $1$ ($25\%$) số điểm có - $1 \le q \le 10; \; 3 \le N \le 20, \; 1 \le k \le 15$ và $1 \le a_i \le 15$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Mỗi truy vấn bạn sẽ in ra `YES` trên một dòng nếu từ dãy $A$ ban đầu có thể biến đổi dãy thỏa mãn điều kiện đưa ra. Ngược lại in `NO`.

## Sample input

```
3
5 3
2 3 2 5 4
3 4
2 4 4
5 4
2 1 5 3 6
```

## Sample output

```
NO
YES
YES
```

## Explanation

- Trong truy vấn đầu tiên ta không thể biến đổi giá trị của mọi phần tử đều bé hơn hoặc bằng $3$.
- Truy vấn thứ hai mọi phần tử đều đã bé hơn hoặc bằng $4$.
- Truy vấn cuối cùng ta có thể biến đổi giá trị của mọi phần tử đều bé hơn hoặc bằng $4$.
