# Diện tích nhỏ nhất - Editorial

Ta có thể giả sử các tọa độ $a_1 \le a_2 \le \dots, a_{2 \dot \le n}$. Diện tích của hình chữ nhật có tọa độ hai điểm đối diện là $(x_1, y_1), \; (x_2, y_2)$ là $(x_2 - x_1) \dot (y_2 - y_1)$.

Vậy ta có thể chia thành hai tập $X$ và $Y$, mỗi tập gồm $n$ điểm sao cho $(max(X) - min(X)) \dot (max(Y) - min(Y))$ là diện tích nhỏ nhất trong tất cả các tập. Trong đó $min(X)$ là hoành độ nhỏ nhất trong các tập và $max(X)$ là hoành độ lớn nhất trong các tập (tương tự cho tung độ).

Có $2$ trường hợp có thể xảy ra:
- Trường hợp $1$: tọa độ nhỏ nhất và lớn nhất cùng nằm trong một tập. Giả sử cùng ở trong $X$ thì $max(X) - min(X) = a_{2 \dot n} - a_1$. Chúng ta cần tối ưu $max(Y) - min(Y)$ sao cho hiệu này là nhỏ nhất. Nếu chỉ số của $min(Y)$ trong dãy $a$ là $i$ và $max(Y)$ trong dãy $a$ là $j \; (j - i \ge n - 1)$. Vì có $n$ phần tử trong tập $Y$ nên ta có thể coi $Y = \{a_i, a_{i + 1}, \dots, a_{i + n - 1}\}$ và xem những điểm khác sẽ không tăng. Do đó $Y$ là một tập tối ưu để làm một đoạn có độ dài $n$.
- Trường hợp $2$: tọa độ nhỏ nhất và lớn nhất ở trong hai tập khác nhau. Giả sử tọa độ nhỏ nhất ở trong $X$ và tọa độ lớn nhất ở trong $Y$. Phần tử lớn nhất trong tập $X$ luôn lớn hơn hoặc bằng $a_n$ vì tập $X$ có $n$ phần tử. Và phần tử nhỏ nhất của $Y$ luôn bé hơn hoặc bằng $a_{n + 1}$ vì tập $Y$ có $n$ phần tử. Nên $(max(X) - min(X)) \dot (max(Y) - min(Y)) \ge (a_n - a_1) \dot (a_{2 \dot n} - a_{n + 1})$ nên ta có thể sử dụng tiền tố độ dài $n$ như $X$ và hậu tố độ dài $n$ như $Y$.

Vậy kết quả sẽ là $min((a_{2 \dot n} - a_1) \dot (a_{i + n - 1} - a_i) \forall 2 \le i \le n, (a_n - a_1) \dot (a_{2 \dot n} - a_{n + 1}))$.