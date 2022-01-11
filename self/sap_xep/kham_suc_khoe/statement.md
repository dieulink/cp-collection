# Khám sức khỏe

Hôm nay là ngày đi học lại của Hiếu và nhà trường tổ chức khám sức khỏe cho các học sinh đi học trực tiếp. Hiếu và các bạn trong lớp xếp thành một hàng dọc để chờ đến lượt khám. Các bác sĩ nhờ Hiếu xếp lại sao cho bạn nào thấp sẽ đứng trước và bạn nào cao sẽ đứng sau.

Bạn được cho một danh sách gồm $n$ phần tử với $a_i$ là chiều cao của bạn thứ $i$. Hãy in ra một danh sách là chiều cao của các bạn sau khi được sắp xếp.

***Yêu cầu:*** Hãy sắp xếp chiều cao của các bạn trong hàng theo thứ tự từ thấp đến cao theo chiều cao.

## Input

- Dòng đầu tiên là số nguyên $n$ là số học sinh trong hàng.
- Dòng tiếp theo gồm $n$ số nguyên $a_1, a_2, a_3, \dots, a_n$ là chiều cao của bạn thứ $i$ trong hàng.

## Constraints

- $1 \le n \le 10^4$.
- $150 \le a_i \le 190$.

## Subtasks

- Subtask $1$ ($25\%$) số điểm có $1 \le n \le 15$.
- Subtask $2$: không có ràng buộc gì thêm.

## Output

- Một dòng duy nhất là chiều cao của $n$ bạn sau khi đã sắp xếp theo thứ tự.

## Sample Input 1

```
5
155 170 169 165 167
```

## Sample Outout 1

```
155 165 167 169 170
```

## Sample Input 2

```
4
150 160 170 180
```

## Sample Output 2

```
150 160 170 180
```

## Explaination 1

Theo thứ tự từ thấp đến cao về chiều cao, bạn thấp nhất với chiều cao $155cm$ sẽ đứng trước và bạn có chiều cao $170cm$ sẽ đứng sau cùng. Vậy sau khi sắp xếp ta được: $155, \; 165, \; 167, \; 169, \; 170$.

## Explaination 2

Các bạn đã đứng theo thứ tự từ thấp đến cao nên không cần sắp xếp.