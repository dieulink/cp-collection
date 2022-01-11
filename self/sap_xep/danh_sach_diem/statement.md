# Danh sách điểm

Kết thúc kì thi lập trình do Ucode tổ chức, ban tổ chức đang gấp rút chuẩn bị cho buổi tổng kết và trao giải. Bạn đang chịu trách nhiệm cho việc trao giải thưởng cho các thí sinh. Bạn sẽ có một danh sách gồm $n$ cái tên của $n$ thí sinh gồm điểm và ID của thí sinh đó. Nhiệm vụ của bạn là in ra một danh sách mới sau khi đã sắp xếp lại thứ tự từ cao đến thấp theo điểm số của thí sinh đó.

***Yêu cầu:*** Bạn được cho danh sách của $n$ thí sinh gồm điểm và ID của thí sinh đó. Hãy in ra danh sách mới theo thứ tự từ cao đến thấp theo điểm của thí sinh đó.

## Input

- Dòng đầu tiên là số nguyên $n$ là số lượng thí sinh trong danh sách.
- $n$ dòng tiếp theo, mỗi dòng gồm số nguyên $x_i$ và chuỗi $s_i$ lần lượt là điểm và ID của thí sinh thứ $i$.

## Constraints

- $1 \le n \le 10^4$.
- $1 \le x_i \le 10^6$. Dữ liệu đảm bảo không có hai thí sinh nào trùng điểm với nhau.
- ID của thí sinh là một chuỗi gồm các kí tự tiếng anh in hoa từ `A` đến `Z`. Mỗi thí sinh sẽ có một ID khác nhau.
- $1 \le len(x_i) \le 100$ với $len(x_i)$ là độ dài chuỗi ID.

## Subtasks

- Subtask $1$: $25\%$ số điểm có $1 \le n \le 10, \; 1 \le x_i \le 100$ và $1 \le len(x_i) \le 5$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Gồm $n$ dòng, mỗi dòng gồm điểm và ID của thí sinh thứ $i$ sau khi đã sắp xếp từ cao đến thấp.

## Sample Input

```
4
10 VNTUIN
21 ENJAR
35 JPKIRA
50 UKMAX
```

## Sample Output

```
50 UKMAX
35 JPKIRA
21 ẸNAR
10 VNTUIN
```

## Explaination

Sắp xếp theo điểm từ thấp đến cao như sau: `50 35 21 10`. Như vậy danh sách sau cùng sẽ là:

```
50 UKMAX
35 JPKIRA
21 ẸNAR
10 VNTUIN
```
