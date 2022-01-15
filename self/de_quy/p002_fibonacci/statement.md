# Fibonacci

Dãy fibonacci là dãy vô hạn các số tự nhiên bắt đầu bằng hai phần tử $1$ và $1$. các phần tử sau đó được thiết lập theo quy tắc mỗi phần tử luôn bằng tổng hai phần tử trước nó. Công thức truy hồi của dãy Fibonacci là:

$$
f(i) = \begin{cases}
    1 & \text{nếu $n = 1$ hoặc $n = 2$}
    \\
    f(i - 2) + f(i - 1) & \text{nếu n > 2}
\end{cases}
$$

***Yêu cầu:*** cho số nguyên $n$. Hãy viết chương trình **đệ quy** tính giá trị của $f(n)$.

## Input

- Dòng duy nhất chứa số nguyên $n$.

## Constraints

- $1 \le n \le 20$

## Output

- Giá trị $f(n)$.

## Sample input 1

```
1
```

## Sample output 1

```
1
```

## Sample input 1

```
3
```

## Sample output 1

```
2
```

