#include <iostream>
using namespace std;
#include <iomanip>
/*
input: dtb(float)
output: dau || rot
steps:
1. khai bao bien dtb
2. nhap lieu 
3. kiem tra xem co lon >= 5.0
3.1 dung: xuat dau
3.2 sai: rot
4 show ket qua
5. ket thuc
*/
// kiem tra nam nhuan
/*
bai1: Viết một chương trình C++ để nhập
 lương nhân viên, tính thuế thu nhập và
lương ròng (số tiền lương thực sự mà 
nhân viên đó nhận được). Với các thông số giả sử như
 sau (không theo luật lương, chỉ là con số giả sử để dễ tính toán):
30% thuế thu nhập nếu lương là 15 triệu.
20% thuế thu nhập nếu lương từ 7 đến 15 triệu.
10% thuế thu nhập nếu lương dưới 7 triệu.

Viết chương trình C++ để tính cước điện thoại bàn cho một hộ gia đình với các thông số như sau:
Phí thuê bao bắt buộc là 25 nghìn.
600 đồng cho mỗi phút gọi của 50 phút đầu tiên.
400 đồng cho mỗi phút gọi của 150 phút tiếp theo.
200 đồng cho bất kỳ phút gọi nào sau 200 phút đầu tiên.
*/
int main() {
    // int nam;
    // cout << "mời nhập nam của bạn: " << endl;
    // cin >> nam;
    // if((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 !=0)) {
    //     cout << "năm nhuần" << endl;
    // } else {
    //     cout << "ko phải năm nhuần" << endl;
    // }
    // return 0;
    cout << fixed;
    float salary = 15000000;
    cout << fixed  << setprecision(2) <<  salary;
}