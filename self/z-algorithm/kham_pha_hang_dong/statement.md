# Khám phá hang động

Tuấn, Minh và Khang nhân dịp nghỉ hè quyết định đi du lịch để thư giãn nghỉ ngơi và khám phá những nơi mới lạ. Một lần nọ, ba cậu bạn tìm ra một hang động kì bí. Cả ba cậu quyết định sẽ tiến vào trong và khám phá bên trong hang động có gì nhưng các cậu bị chặn lại vì có một tảng đá lớn chặn lối vào. Bên cạnh tảng đá có khắc một dòng chữ $s$. Tuấn nhanh trí đọc lớn dòng chữ đó lên nhưng không có gì bất ngờ xảy ra. Trong khi Minh đang trầm tư suy nghĩ thì Tuấn cũng thử sức và đọc to dòng chữ nhưng theo thứ tự ngược lại. Sau một hồi suy nghĩ Minh quyết định cậu sẽ đọc một dòng chữ vừa xuất hiện ở đầu đuôi và giữa chuỗi. Chuỗi đó phải là một chuỗi dài nhất có thể. Sau khi dọc to đoạn chuỗi thích hợp thì cánh cửa ngăn cách ba thiếu niên thám hiểm hang động sẽ được mở ra.

***Yêu cầu:*** Bạn được cho một chuỗi $s$ hãy giúp Minh tìm ra chuỗi con dài nhất thỏa mãn xuất hiện ở đầu, giữa và cuối.

## Input

- Một dòng duy nhất là chuỗi $s$ được khắc lên trên tường đá. Chuỗi là các kí tự trong bảng chữ cái tiếng anh in thường từ 'a' đến 'z'.

## Constraints

- Độ dài chuỗi không quá $10^6$ kí tự.

## Subtasks

- Subtask $1$: $25\%$ số điểm đảm bảo độ dài chuỗi không quá 15 kí tự.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Nếu tìm ra được một chuỗi thỏa mãn yêu cầu của Minh hãy in chuỗi đó ra. Ngược lại hãy in `Just a legend` - hiểu rằng đằng sau hang đá đó chỉ là một huyền thoại, lời đồn.

## Sample input 1

```
fixprefixsuffix
```

## Sample output 1

```
fix
```


## Sample input 2

```
abcdabc
```

## Sample output 2

```
Just a legend
```

## Explaination 1

Ta thấy chuỗi `fix` là tiền tố, hậu tố và có xuất hiện ở giữa dãy (vị trí thứ $6$) nên chuỗi `fix` là chuỗi cần tìm.

## Explaination 2

Đầu và chuỗi chuỗi đều là chuỗi `abc` nhưng chuỗi này không xuất hiện ở giữa chuỗi $s$.