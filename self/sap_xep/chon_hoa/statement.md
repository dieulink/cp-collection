# Chọn hoa

Tiệm hoa của Linh có $n$ loại hoa khác nhau, mỗi loại hoa có một độ đẹp $a_i$. Minh muốn mua hoa để tặng cho mẹ và chị của cậu nhân ngày phụ nữ Việt Nam. Để cho hai người khỏi phải phân biệt nhau về độ đẹp của những loại hoa thì cậu muốn chọn ra hai loại hoa có độ đẹp gần nhau nhất.

***Yêu cầu:*** Bạn sẽ giải quyết bài toán với $q$ truy vấn, mỗi truy vấn bạn được cho độ đẹp của $n$ loại hoa hãy giúp Minh đưa ra độ đẹp chênh lệch nhỏ nhất của hai loại hoa được Linh chọn với mỗi truy vấn nhé.

## Input

- Dòng đầu tiên là số nguyên $q$ là số truy vấn cần giải quyết. Mỗi truy vấn có dạng:
    - Dòng đầu tiên là số nguyên dương $n$ - số loại hoa có trong cửa hàng của Linh.
    - Dòng tiếp theo gồm $n$ số nguyên $a_1, a_2, a_3, \dots, a_n$ là độ đẹp của loài hoa thứ $i$.

## Constraints

- $1 \le q \le 10$.
- $2 \le n \le 5000$.
- $1 \le a_i \le 10^9$.

## Subtasks

- Subtask $1$: $25\%$ số điểm thỏa mãn:
    - $1 \le n \le 15$.
    - $1 \le a_i \le 100$.
- Subtaks $2$: không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, mỗi dòng là một số nguyên là kết quả của từng truy vấn.

## Sample Input

```
1
5
4 9 1 32 13
```

## Sample Output

```
3
```

## Explaination

Độ đẹp chênh lệch nhỏ nhất là $4 - 1 = 3$.
