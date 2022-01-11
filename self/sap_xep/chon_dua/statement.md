# Chọn đũa

Tuân đang chạy bàn tại một quán cơm, chủ quán phân công cho cậu chuẩn bị bát đũa để lên bàn. Ông chủ giao cho cậu $n$ chiếc đũa mỗi chiếc đũa có chiều dài $a_i$ để xếp thành từng đôi đũa. Một đôi đũa nên có hai chiếc đũa cùng độ dài nhưng đời không hoàn hảo nên đũa không đều. Do vậy Tuân muốn hai chiếc đũa chỉ lệch nhau không quá một đoạn $d$. Bạn hãy giúp Tuân đếm xem từ $n$ chiếc đũa đó sẽ tạo được bao nhiêu đôi đũa nhé.

***Yêu cầu:*** Bạn hãy giúp Tuân đếm xem xếp được bao nhiêu đôi đũa.

## Input

- Dòng đầu tiên gồm $2$ số nguyên $n$ và $d$.
- Dòng tiếp theo gồm $n$ số nguyên $a_1, a_2, a_3, \dots, a_n$ là chiều dài của chiếc đũa thứ $i$.

## Constraints

- $1 \le n \le 10^5$.
- $0 \le d \le 10^9$.
- $1 \le a_i \le 10^9$.

## Subtasks

- Subtask $1$: $25\%$ số điểm thỏa mãn:
    - $1 \le n \le 10$.
    - $1 \le d \le 5$.
    - $1 \le a_i \le 20$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là số đôi đũa mà Tuân xếp được.

## Sample Input

```
5 2
1
3
3
9
4
```

## Sample Output

```
2
```

## Explaination

Ta có thể xếp tối đa $2$ đôi đũa. Đôi đũa thứ nhất là chiếc thứ $1$ và $3$. Đôi đũa thứ $2$ là chiếc thứ $2$ và $5$.
