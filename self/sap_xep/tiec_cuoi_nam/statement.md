# Tiệc cuối năm

Kết thúc năm $2021$ đầy thăng trầm, mọi người ở Ucode quyết định mở một bữa tiệc tại văn phòng. Hiếu và Đạt là hai người phụ trách tổ chức bữa tiệc ngày hôm đây. Để tăng sự thú vị cho bữa tiệc, hai người quyết định sẽ tạo một mật khẩu và thách đố mọi người mỗi khi đến văn phòng. Câu đố như sau: hai người Đạt và Hiếu, mỗi người sẽ đưa ra một chuỗi gồm những chữ cái tiếng Anh in hoa với độ dài không quá $100$ kí tự. Sau đó họ sẽ ghép hai chuỗi kí tự này lại tạo thành một chuỗi mới với và đảo lộn vị trí của các kí tự đi để tạo ra một chuỗi ngẫu nhiên. Chuỗi này sẽ được treo ở trước cửa văn phòng chỉ những ai đoán ra được chuỗi ban đầu mới có thể vào bữa tiệc còn những ai không giải ra phải chịu một hình phạt nho nhỏ để vào tiệc. Song đến hôm bữa tiệc diễn ra thì có người nào đó đã ngầm phá hỏng câu đố này. Người đó đã thay đổi một số kí tự trong chuỗi bằng một vài kí tự khác (có thể không đổi). Bạn hãy giúp mọi người kiểm tra thử liệu có thể từ chuỗi kí tự đã bị phá hoại nhưng vẫn có thể xác định đúng $2$ chuỗi ban dầu mà Đạt và Hiếu đã đưa ra không.

***Yêu cầu:*** Bạn được cho hai chuỗi của Đạt và Hiểu cùng với chuỗi kí tự đã bị phá hoại. Hãy xác định xem từ chuỗi bị phá hoại có thể xác định được hai chuỗi ban đầu không?

## Input

- Dòng đầu tiên là chuỗi kí tự mà Đạt nghĩ ra.
- Dòng thứ hai là chuỗi kí tự mà Hiếu nghĩ ra.
- Dòng thứ ba là chuỗi kí tự được treo trước cửa nhưng đã bị thay đổi kí tự.

## Constraints

- Hai chuỗi kí tự của Đạt và Hiếu có độ dài không quá $100$ kí tự.

## Output

- Nếu từ chuỗi treo ở trước cửa văn phòng có thể tìm ra được $2$ chuỗi của Đạt và Hiếu thì in `YES`. Ngược lại hãy in `NO`.


## Sample input 1

```
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS
```

## Sample output 1

```
YES
```

## Explanation 1

Ta thấy nếu đổi chuỗi của Hiếu thành `MOROZDED` và chuỗi của Đạt ta sẽ tách ra thành $2$ chuỗi nhỏ là `SANTA` và `CLAUS` sau đó ghép với chuỗi của Hiếu ta sẽ được `SANTAMOROZDEDCLAUS` chính là chuỗi được treo trước cửa. Như vậy từ chuỗi trước cửa ta vẫn có thể tìm ra được hai chuỗi ban đầu của Đạt và Hiếu.


## Sample input 2

```
PAPAINOEL
JOULUPUKKI
JOULNAPAOILELUPUKKI
```

## Sample output 2

```
NO
```

## Explanation 2

Chuỗi được treo trước cửa so với hai chuỗi của Đạt và Hiếu bị thiếu một chữ `P` và thừa một chữ `L`. Nên ta không thể tìm ra được hai chuỗi ban đầu.


## Sample input 3

```
BABBONATALE
FATHERCHRISTMAS
BABCHRISTMASBONATALLEFATHER
```

## Sample output 3

```
NO
```

## Explanation 3

Chuỗi được treo trước cửa bị thừa một chữ `L` nên ta không thể tìm đúng hai chuỗi ban đầu của Hiếu và Đạt.
