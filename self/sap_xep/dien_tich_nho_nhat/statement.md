# Diện tích nhỏ nhất

Trong giờ học toán Tuân đã vẽ một hình chữ nhật có tọa độ điểm góc dưới trái và góc trên phải lần lượt là $(x_1, y_1)$ và $(x_2, y_2)$. Diện tích của hình chữ nhật này có thể bằng $0$. Trong hình chữ nhật này Tuân đã vẽ những ngôi sao có tọa độ $(x, y)$ sao cho $x_1 \le x \le x_2$ và $y_1 \le y \le y_2$. Vì buồn ngủ nên Tuân có thể đã vô ỹ vẽ những ngôi sao chồng lên nhau (nói cách khác chùng có cùng tọa độ). Không may thay, trong lúc mơ màng Tuân để gió cuốn bay mất tờ giấy, Tuân chỉ còn lại một tờ ghi chú tọa độ của những ngôi sao Tuân đã vẽ.

Về nhà với một tờ giấy gồm những số nguyên không theo thứ tự nào nhưng Tuân chỉ biết đó là tọa độ của những ngôi sao Tuân đã vẽ. Tuân muốn các bạn hãy giúp Tuân tìm hình chữ nhật có thể chứa hết tất cả những ngôi sao có tọa độ là những số nguyên mà Tuân đã ghi lại. Có thể có rất nhiều hình chữ nhật thỏa mãn nên hãy đưa ra diện tích của hình chữ nhật nhỏ nhất thỏa mãn để Tuân không phải vẽ nhiều.

***Yêu cầu:*** Bạn biết Tuân đã vẽ $n$ ngôi sao và được cho danh sách gồm $2 \dot n$ số nguyên là tọa độ của $n$ ngôi sao Tuân đã vẽ nhưng đã bị sắp xếp lộn xộn không theo trình tự. Hãy đưa ra diện tích hình chữ nhật nhỏ nhất chứa tất cả $n$ ngôi sao đó.

## Input

- Dòng đầu tiên là số nguyên dương $n$ - số ngôi sao Tuân đã vẽ.
- Dòng tiếp theo gồm $2 \dot n$ số nguyên dương $a_1, a_2, a_3, \dots, a_n$ là tọa độ của $n$ ngôi sao nhưng không theo trình tự nào cả.

## Constrains

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^9$.

## Subtasks

- Subtask $1$: $25\%$ số điểm có $1 \le n \le 10$ và $1 \le a_i \le 50$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là diện tích của hình chữ nhật nhỏ nhất chứa tất cả $n$ ngôi sao.

## Sample Input

```
4
4 1 3 2 3 2 1 3
```

## Sample Output

```
1
```

## Explaination

Tuân có thể đã vẽ những ngôi sao có tọa độ $(1, 3), \; (1, 3), \; (2, 3), \; (2, 4)$. Trong trường hợp này diện tích của hình chữ nhật chứa cả $4$ ngôi sao này là $1$ (cụ thể là hình chữ nhật có tọa độ hai đỉnh đối nhau là $(1, 3), \; (2, 4)$).