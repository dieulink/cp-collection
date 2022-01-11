# Chọn đi thi

Tuân tham gia kì thi lập trình trên trường để tìm ra người giỏi đi thi học sinh giỏi cấp quốc gia. Tuân vừa thi xong thì xin được bảng điểm của mọi người tham gia và Tuân muốn tính toán xem thử mình có lọt trong top $6$ người giỏi nhất để đi thi không. Bạn hãy giúp Tuân.

Bảng điểm của $n$ học sinh, mỗi học sinh có một ID, điểm và số lần nộp bài. Môi thí sinh sẽ có một ID riêng phân biệt. Các thí sinh có điểm bằng nhau thì sẽ so sánh số lần nộp bài, ai nộp bài nhiều hơn sẽ có thứ hạng thấp hơn.

***Yêu cầu:*** Cho bảng điểm của $n$ học sinh và ID của Tuân. Nếu Tuân ở trong top $6$ người ở vị thứ cao nhất thì in ra `YES` ngược lại hãy in ra `NO`.

## Input

- Dòng đầu tiên là số nguyên $n$ - số thí sinh tham gia cuộc thi.
- Dòng thứ hai là chuỗi $s$ là ID của Tuân.
- $n$ dòng tiếp theo, mỗi dòng gồm chuỗi $s_i, \; p_i, \; q_i$ lần lượt là ID, điểm và số lần nộp bài của thí sinh thứ $i$.
- Đề bài đảm bảo ID, số lần nộp bài của mỗi thí sinh là khác nhau và ID của học sinh có độ dài $4$ kí tự thuộc bảng chữ cái in hoa tiếng anh.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le p_i \le 1000$.
- $1 \le q_i \le 10^6$.

## Subtasks

- Subtask $1$: $25\%$ số điểm thỏa mãn:
    - $7 \le n \le 20$.
    - $1 \le p_i \le 50$.
    - $1 \le q_i \le 50$.
- Subtask $2$: $25\%$ số điểm thỏa mãn: 
    - $7 \le n \le 1000$.
    - $1 \le p_i \le 1000$.
    - $1 \le q_i \le 1000$.
- Subtask $3$: $50\%$ số điểm còn lại không có ràng buộc gì thêm.

## Output

- Một dòng duy nhất là `YES` nếu Tuân ở trong top $6$ và `NO` trong trường hợp ngược lại.

## Sample Input

```
7
IYGE
YIPO 23 3
CNAL 36 2
WKQF 2 11
YXPX 23 13
CFCG 47 14
MOBT 45 5
IYGE 43 2
```

## Sample Output

```
YES
```

## Explaination

Sau khi sắp xếp lại bảng điểm ta được:
```
CFCG 47 14
MOBT 45 5
IYGE 43 2
CNAL 36 2
YIPO 23 3
YXPX 23 13
WKQF 2 11
```

ID của Tuân là `IYGE` và theo bảng điểm đã xếp hạng thì Tuân đứng thứ $3$ nên Tuân hiển nhiên trong top $6$ và được chọn đi thi học sinh giỏi cấp quốc gia.
