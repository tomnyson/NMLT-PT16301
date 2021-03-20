#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = 5;
    cout << "a" << a << endl;
    cout << "b" << b << endl;
    cout << "chia lấy dư" << a % b << endl;
    //so sanh
    cout << "a < b" << (a < b) << endl; // dung 1 / sai: 0
    cout << "a <= b" << (a <= b) << endl;
    cout << "a > b" << (a > b) << endl;
    cout << "a => b" << (a >= b) << endl;
    cout << "a == b" << (a == b) << endl;
    cout << "a != b" << (a != b) << endl;
    // phép gắn:
    int ketqua = 3;
    // gắn giá trị cho biến kết quả sẽ bẳng tổng a + b
    //ketqua = a - b; 
    // vũ tiến đạt 10 lan hcn
    // phạm công đại: chep 10 lan dien tich hinh tron
    // định văn nguyên :  chép 10 lần ví dụ các kiểu biến: 1 kiểu 10 lần
    // bùi ngọc long:  chép 10 lần ví dụ các kiểu biến: 1 kiểu 10 lần
    ketqua += 3;
    cout << "ket qua" << ketqua << endl;
    return 0;
}