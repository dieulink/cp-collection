# Nối cầu gỗ - Editorial

Ta có thể dặt ván gỗ giữa cây cầu thứ $i$ và $i + 1$ nếu chiều dài ván gỗ nằm trong khoảng $[l_{i + 1} - r_i; r_{i + 1} - l_i]$. Vậy bài toán trở thành một bài toán đơn giản hơn: có $n - 1$ đoạn và $m$ điểm trên một đường thẳng với mỗi đoạn chúng ta có thể thêm một điểm nằm giữa các đoạn và mỗi điểm chỉ có thể được thêm vào một lần.

Gọi một đoạn là dang mở nếu đoạn đó chưa được thêm vào. Duyệt qua tất cả các điểm tử trái qua phải, tại mỗi điểm ta sẽ đưa tất cả các đoạn mở vào một cây tìm kiếm nhị phân (`std::set` trong `c++`). Sau đó ta sẽ thêm điểm đang xét vào bên phải của đoạn ở phía trái nhất.

Thuật toán này sẽ tìm được đáp án nếu tồn tại một đáp án bất kì. Giả sử nếu cách giải này không đúng và tồn tại một lời giải mà điểm $A$ được thêm vào một đoạn mở khác. Thì điểm $B$ đã được thêm vào đoạn đã được thêm điểm $A$. Điểm $B$ bên phải điểm $A$ nên ta có thể đổi chỗ hai điểm này thì ta sẽ được đáp án.

Độ phức tạp thời gian: $O((n + m) \log (n + m))$
