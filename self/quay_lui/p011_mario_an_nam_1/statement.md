# Mario ăn nấm 1

Mario đang đứng ở một vùng đất được chia thành $n \cdot m$ ô vuông. Mỗi ô vuông có một cây nấm, nếu ăn cây nấm $(i, j)$ sẽ nhận được số điểm là $c_{i, j}$. 

Ô Mario xuất phát là ô $(1, 1)$, ô đích là $(n, m)$, ở mỗi bước Mario có thể đi qua ô kề phải hoặc kề dưới ô đang đứng. Cụ thể, nếu đang đứng ở ô $(i, j)$ thì Mario có thể đi đến ô $(i + 1, j)$ hoặc $(i, j + 1)$.

***Yêu cầu:*** Bạn hãy tính số điểm lớn nhất nếu Mario có phương án đi từ ô xuất phát đến ô đích một cách hợp lý.

## Input

- Dòng thứ nhất chứa hai số nguyên $n, m$.
- $n$ dòng tiếp theo, mỗi dòng chứa $m$ số nguyên $c_{i, j}$ là số điểm của các cây nấm.

## Constraints

- $1 \le n, m \le 5$.
- $1 \le c_{i, j} \le 100$

## Output

- Số điểm lớn nhất.


