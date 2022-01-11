# Giúp bạn - Editorial

Có hai trường hợp ta có thể thử: $k$ tài liệu nặng nhất và $k$ tài liệu nhẹ nhất. Nên ta có thể giải quyết bài toán như sau:

- Sắp xếp lại các khối lượng của các tập tài liệu.
- Tính $S$ là tổng của tất cả $n$ tập tài liệu.
- Tính $S_1$ là tổng $k$ tập tài liệu đầu tiên.
- Tính $S_2$ là tổng $k$ tập tài liệu cuối cùng.
- Kết quả bài toán sẽ là: $$max(|S_1 - (S - S_1)|, |S_2 - (S - S_2)|)$$
