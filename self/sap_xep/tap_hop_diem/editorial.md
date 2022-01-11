# Tập hợp điểm - Editorial

Bạn có thể nghĩ đến sử dụng những thuật toán trên đồ thị để xử lí bài tập này. Nhưng sau một chút suy nghĩ và thay đổi tương đương ở trong phát biểu của vấn đề thì nó có thể đơn giản hóa lại thành một bài tập tham lam.

Ban đầu bạn có những điểm sẽ nằm trong cùng một tập hợp nếu chúng không quá gần nhau ví dụ như $|x_i - x_j| \ge k_i + k_j$. Điều này tương ứng với điều kiện sau. Hãy xét đến đường tròn bán kính $k_i$ với tâm là điểm $x_i$ và xem giá trị bán kính này là bán của của đường tròn tâm $i$. Như vậy đề bài có thể đơn giản thành sẽ không có hai bán kính nào giao nhau.

Bài tập này tương đối phổ biến và có thể giải quyết bằng việc sắp xếp những đoạn con theo chiều tăng dần của điểm bên phải.

Tương đối dễ để chứng minh lời giải này đúng. Trong tất cả những cách chọn $m$ đoạn đầu tiên thì cách tốt nhất là chọn đoạn có tọa độ $x$ nhỏ nhất của điểm bên phải và ở đoạn cuối.