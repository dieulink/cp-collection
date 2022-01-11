# Chăm chỉ luyện tập

Sang năm mới Ucode thông báo tổ chức một cuộc thi lập trình với giải thưởng cao. Toàn và những người bạn rất háo hức muốn tham gia cuộc thi này. Để chuẩn bị cho cuộc thi toàn và các bạn muốn lên kế hoạch luyện tập. Kế hoạch luyện tập như sau: ngày đầu tiên các bạn sẽ làm một bài, ngầy thứ $2$ sẽ giải $2$ bài, ngày thứ $3$ sẽ giải $3$ bài và cứ như vậy ngày thứ $k$ sẽ giải $k$ bài. Các bạn quyết định làm bài trong một vài contest, mỗi contest gồm $a_i$ bài. Nếu hôm nay là ngày thứ $k$ và contest có $h \; (h \ge k)$ bài tập thì các bạn sẽ chỉ làm $k$ bài tập trong đó. Ngược lại nếu $h < k$ thì các bạn sẽ ngừng lại và nghỉ ngơi để chuẩn bị tham gia cuộc thi. Bạn hãy cho biết Toàn và các bạn sẽ luyện tập tổng cộng bao nhiêu ngày?

***Yêu cầu:*** Bạn biết được contest thứ $i$ có $a_i$ bài tập, mỗi ngày các bạn sẽ làm $1$ contest. Bạn hãy cho biết Toàn và các bạn sẽ luyện tập bao nhiêu ngày trước kì thi.

## Input

- Dòng đầu tiên là số nguyên dương $N$ là số lượng contest.
- Dòng tiếp theo gồm $N$ số nguyên $a_1, a_2, \dots, a_N$ là số lượng bài tập trong contest thứ $i$.

## Constraints

- $1 \le N \le 2 \dot 10^5$.
- $1 \le a_i \le 2 \dot 10^5$.

## Subtasks

- Subtask $1$ ($50\%$) số điểm có $1 \le N \le 10$ và $1 \le a_i \le 20$.
- Subtask $2$ không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là số ngày các bạn sẽ luyện tập.

## Sample input 1

```
4
3 1 4 1
```

## Sample output 1

```
3
```

## Sample input 2

```
3
1 1 1
```

## Sample output 2

```
1
```

## Explaination 1

Các bạn sẽ luyện tập $3$ ngày và theo thứ tự làm các contest thứ $4, 1, 3$.

## Explaination 2

Các bạn chỉ luyện tập $1$ ngày.
