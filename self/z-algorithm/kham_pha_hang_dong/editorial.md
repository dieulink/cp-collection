# Khám phá hang động - Editorial

Ta có thể sử dụng thuật toán Z để giải quyết bài này như sau. Ở mỗi lượt cập nhật $z_i$ trong thuật toán ta sẽ đếm số lần xuất hiện của chuỗi con có độ dài $R - L$ đó. Sau khi xây dựng được dãy $z$ hoàn chỉnh ta chỉ cần tìm độ dài chuỗi con lớn nhất. Nếu chuỗi con đó xuất hiện nhiều hơn $1$ lần thì ta sẽ cập nhật lại kết quả của chuỗi con đó.
