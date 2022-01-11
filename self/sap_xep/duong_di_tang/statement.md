# Đường đi tăng

Hôm nay Tuân được giao một bài tập lập trình liên quan đến đồ thị. Tuân luôn cố gắng hoàn thành bài tập được giao nhưng Tuân lại rất dở những bài tập liên quan đến đồ thị.

Đề bài như sau: Bạn được cho một đồ thị có hướng với $n$ đỉnh và $m$ cạnh. Bạn cần tìm một đường đi dài nhất có thể (có nhiều cạnh nhất có thể) sao cho trọng số của các cạnh trên đường đi tạo thành một dãy tăng.

***Yêu cầu:*** Bạn được cho đồ thị như mô tả, hãy giúp Tuân giải quyết bài toán này.

## Input

- Dòng đầu tiên là $2$ số nguyên $n$ và $m$ là số đỉnh và số cạnh của đồ thị.
- $m$ dòng tiếp theo, mỗi dòng gồm $3$ số $u, v, w$ cho biết có cạnh nối từ $u$ đến $v$ với trọng số là $w$.

## Constraints

- $2 \le n \le 3 \cdot 10^5$.
- $1 \le m \le min(n \cdot (n - 1), 3 \cdot 10^5)$.
- $1 \le u, v \le n$.
- $1 \le w \le 10^5$.
- Đồ thị đảm bảo không có chu trình và các cạnh trùng nhau.

## Subtasks

- Subtask $1$: $25\%$ số điểm thỏa mãn:
    - $2 \le n \le 10$.
    - $1 \le m \le min(n \cdot (n - 1), 20)$.
    - $1 \le w \le 20$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Một dòng duy nhất là kết quả bài toán.

## Sample input 1

```
3 3
1 2 1
2 3 1
3 1 1
```

## Sample output 1

```
1
```

## Explanation 1

Một vài đường đi có thể: $1 \to 2, \; 2 \to 3, \; 3 \to 1$.

## Sample input 2

```
3 3
1 2 1
2 3 2
3 1 3
```

## Sample output 2

```
3
```

## Explanation 2

Đường đi dài nhất: $1 \to 2 \to 5 \to 4 \to 3 \to 2 \to 6$.
