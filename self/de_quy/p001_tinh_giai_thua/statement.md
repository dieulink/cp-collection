# Tính giai thừa

$n!$ (đọc là $n$ giai thừa) được định nghĩa như sau:

$$
n! = \begin{cases}
    1 \times 2 \times \dots \times n & \text{n > 0}
    \\
    1                                & \text{n = 0}
\end{cases}
$$

**Yêu cầu:** Cho số nguyên $n$. Bạn hãy viết chương trình **đệ quy** tính $n!$, vì kết quả có thể rất lớn nên bạn chỉ cần in ra phần modulo $10^9 + 7$.

## Input

- Dòng đầu tiên chứa số nguyên $n$.

## Constraints

- $1 \le n \le 100$

## Output

- In ra $n!$ modulo $10^9 + 7$.

## Sample input 1

```
0
```

## Sample output 1

```
1
```

## Sample input 2

```
2
```

## Sample output 2

```
2
```

## Sample input 3

```
5
```

## Sample output 3

```
120
```

## Sample input 4

```
100
```

## Sample output 4

```
437918130
```