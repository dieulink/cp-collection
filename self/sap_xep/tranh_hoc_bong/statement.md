# Tranh học bổng

Minh đang hoạt động hết công suất để giành được học bổng do Ucode tài trợ. Để giành được học bổng, điểm trung bình cộng các môn học của Minh phải đạt ít nhất $avg$ và Minh cần phải làm $N$ bài test. Mỗi bài test đều dựa trên thang điểm $r$ (nghĩa là điểm số tối đa cho mỗi bài kiểm tra là $r$). Minh đã hoàn thành tất cả các bài kiểm tra và điểm của bài kiểm tra thứ $i$ là $a_i$. Minh có thể cải thiện điểm của một bài kiểm tra thứ $i$ bằng việc viết $b_i$ bài tiểu luận và với mối $b_i$ bài tiếu luận Minh sẽ được cộng $1$ điểm vào điểm của bài kiểm tra đó. Minh có thể tăng điểm của một bài kiểm tra lên nhiều lần.

***Yêu cầu:*** Hãy giúp Minh xác định xem số bài tiểu luận cần viết ít nhất là bao nhiêu để Minh có thể giành học bổng trong thời gian và sức lực ít nhất.

## Input

- Dòng đầu tiên gồm $3$ số nguyên dương $N, \; r$ và $avg$ lần lượt là số bài kiểm tra, điểm tối đa của các bài kiểm tra và điểm trung bình tối thiểu Minh cần đạt để giành được học bổng.
- $N$ dòng tiếp theo, mỗi dòng gồm $2$ số nguyên $a_i$ và $b_i$ là số điểm của bài kiểm tra thứ $i$ và số bài tiểu luận cần làm để bài kiểm tra thứ $i$ được cộng thêm $1$ điểm.

## Constraints

- $1 \le N \le 10^5$.
- $1 \le r \le 10^9$.
- $1 \le avg \le \min(r, 10^6)$.
- $1 \le a_i \le r$.
- $1 \le b_i \le 10^6$.

## Subtasks

- Subtask $1$ ($25\%$) số điểm có $1 \le N \le 10, \; 1 \le r \le 10, \; 1 \le avg \le \min(r, 100)$ và $1 \le b_i \le 20$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Số nguyên duuy nhất là số bài tiểu luận mà Minh cần phải viết.

## Sample input 1

```
5 5 4
5 2
4 7
3 1
3 2
2 5
```

## Sample output 1

```
4
```

## Explanation 1

Minh sẽ viết thêm $2$ bài tiểu luận thứ $3$ và $1$ bài tiểu luận thứ $4$.

## Sample input 2

```
2 5 4
5 2
5 2
```

## Sample output 2

```
0
```

## Explanation 2

Minh đã đủ điểm nên không cần viết thêm bài tiểu luận nào.
