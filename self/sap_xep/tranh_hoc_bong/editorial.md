# Tranh học bổng - Editorial

Sắp xếp lại danh sách các bài kiểm tra theo chiều giảm dần của số bài tiểu luận. Sau đó ta có thể duyệt từ đầu danh sách và lựa chọn ra số bài tiểu luận tối ưu: chừng nào tổng điểm các bài kiểm tra còn bé hơn $avg \dot n$ thì ta có thể cộng thêm số điểm là $\min(avg \dot n - sum, r - a_i)$ với $sum$ là tổng điểm các bài kiểm tra.