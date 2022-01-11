# Đường đi tăng - Editorial

**Yêu cầu bài toán:** xác định chiều dài của một đường đi trong một đồ thị sao cho trọng số trên các cạnh là một dãy tăng ngặt.

Đầu tiên ta hãy xét một đồ thị có $n$ đỉnh và không có cạnh nối. Sau đó ta có thể sắp xếp danh sách cạnh theo thứ tự không giảm của trọng số và lần lượt thêm vào đồ thị.

Gọi $dp[u]$ là chiều dài dài nhất của đường đi tăng kết thúc tại đỉnh $u$. Khi ta thêm một cạnh $(u, v)$ vào đồ thị, ta sẽ cập nhật lại $dp[v] = max(dp[v], dp[u] + 1)$ (vì đường đi dừng ở đỉnh $v$ và có cạnh $(u, v)$ trên đường đi). Bạn sẽ quan tâm đến trường hợp những cạnh có cùng trọng số. Trong trường hợp này, ta có thể thêm tất cả các cạnh có cùng trọng số cùng một lúc.

Độ phức tạp thời gian: $O(n + m \times \log m)$.