/*
Mình sẽ sử dụng cấu trúc switch trong việc đưa ra ngày của tháng. Cụ thể:
Tháng 1, 3, 5, 7, 8, 10, 12 sẽ có 31 ngày
Tháng 4, 6, 9, 11 có 30 ngày
Tháng 2 năm nhuận có 29 ngày, năm thường 28 ngày.
Vấn đề thứ 2 chúng ta cần biết năm đó là năm nhuận hay không?
Do đó mình viết thêm phần nhập vào năm và kiểm tra xem năm đó là năm nhuận hay không?
 -------
 Nếu người dùng ấn một phím (từ 0 tới 9) thì chương trình sẽ hiển thị số số được nhấn này, ngược lại hiển thị “Phím bạn ấn không phải là số!”.
 switch(expression) {
   case constant-expression:
      statement(s);
      break; //optional
   case constant-expression:
      statement(s);
      break; //optional
   
    
   default : //Optional
      statement(s);
}
Ví dụ: In ra số chẵn và số lẻ.
-----
Chúng ta cùng xét một ví dụ phân loại sinh viên dựa vào kết quả điểm học tập. Nếu điểm A thì phân loại là sinh viên xuất xắc, điểm B là sinh viên loại giỏi, điểm C là sinh viên loại khá, điểm D là sinh viên loại trung bình, điểm F là sinh viên loại yếu. Được viết bằng cấu trúc điều khiển switch case như sau:
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
-------
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
 */