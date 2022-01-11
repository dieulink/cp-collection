# Tập hợp điểm

Sau nhiều ngày luyện tập quy hoạch động thì thầy Tuân quyết định ra một bài hình học để cho các học sinh mình đổi gió. Đề bài của thầy như sau: cho $N$ điểm phân biệt trên một đường thẳng. Điểm thứ $i$ có tọa độ $x_i$ và có một giá trị $k_i$. Thầy sẽ nối $2$ điểm $i, j \; (i \neq j)$ bất kì nếu thỏa điều kiện: $|x_i - x_j| \ge k_i + k_j$ (Các đường nối là một nét liền và là đường cong như hình vẽ). 

<p align="center"> 
    <img src="https://cdn.ucode.vn/uploads/33881/upload/WtbhEaww.png" alt="Ảnh minh họa"/>
</p>

Thầy Tuân muốn các học trò của mình tìm một tập hợp gồm những điểm con sao cho hai điểm bất kì trong đó đều được nối lại với nhau. Yêu cầu của thầy là hãy tìm một tập con như thế với kích thước lớn nhất.

***Yêu cầu:*** từ những điểm cho trước hãy tìm tập con lớn nhất thỏa yêu cầu của thầy Tuân.

## Input

- Dòng đầu tiên là số nguyên $N$ là số điểm trên đường thẳng.
- $N$ dòng tiếp theo mỗi dòng gồm $2$ số nguyên $x_i$ và $k_i$.

## Constraints

- $1 \le N \le 2 \dots 10^5$.
- $0 \le x_i \le 10^9$.
- $1 \le k_i \le 10^9$.
- Đề bài đảm bảo tọa độ các điểm $x_i$ đều phân biệt.

## Subtasks

- Subtask $1$ ($25\%$) số điểm có:
    - $1 \le N \le 20$.
    - $1 \le x_i \le 40$.
    - $1 \le k_i \le 20$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là số điểm trong tập con lớn nhất thỏa điều kiện của thầy Tuân.

## Sample input

```
4
2 3
3 1
6 1
0 2
```

## Sample output

```
3
```

## Explanation

Những điểm được nối với nhau sẽ có dạng `(x y)` với $x$ và $y$ là tọa độ hai điểm được nối. Những cặp điểm được nối với nhau là: `(2 3); (2 0); (2 6); (3 0)`. Như vậy tập con lớn nhất gồm những điểm thỏa mãn yêu cầu của thầy gồm $3$ điểm có tọa độ $0, \; 2, \; 3$.