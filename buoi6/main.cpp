#include <iostream>
#include <math.h>
using namespace std;
// khai báo hằng số
const float BAC1 = 1.678;
const float BAC2 = 1.734;
const float BAC3 = 2.014;
const float BAC4 = 2.536;
const float BAC5 = 2.834;
const float BAC6 = 2.927;
 
 /**
Phí thuê bao bắt buộc là 25 nghìn.
600 đồng cho mỗi phút gọi của 50 phút đầu tiên.
400 đồng cho mỗi phút gọi của 150 phút tiếp theo.
200 đồng cho bất kỳ phút gọi nào sau 200 phút đầu tiên.
-----
Viết chương trình tính tiền cước TAXI. Biết rằng:
– Km đầu tiên là 5000đ
– 30Km tiếp theo là 4000đ
– Nếu lớn hơn 30Km thì mỗi Km thêm ra sẽ phải trả là 3000đ
– Hãy nhập số Km sau đó in ra số tiền phải trả.


int main() {
    float tongTien = 0;
    float soDien;
    cout << "nhập số điện đã sử dụng" << endl;
    cin >> soDien;
    if(soDien <= 50) {
        tongTien = soDien * BAC1;
    } else if (soDien <= 100) {
        tongTien = 50 * BAC1 + (soDien - 50)*BAC2;
    } else if (soDien <= 200) {
        tongTien = 50 * BAC1 + 50*BAC2 + (soDien - 100)*BAC3;
    } else if (soDien <= 300) {
        tongTien = 50 * BAC1 + 50*BAC2 + 100 *BAC3 + (soDien - 200)*BAC4;
    }  else if (soDien <= 400) {
        tongTien = 50 * BAC1 + 50*BAC2 + 100 *BAC3 + 100*BAC4 + (soDien -300) * BAC5;
    } else {
        tongTien = 50 * BAC1 + 50*BAC2 + 100 *BAC3 + 100*BAC4 + 100 * BAC5 + (soDien-400) *BAC6; 
    }
    // so du dung 350
    float demo = 50*BAC1 + 50*BAC2 + 100 * BAC3 + 100*BAC4 + 50*BAC5;
    cout << "số tiền phải trả là: " << tongTien<< endl;
    cout << "số tiền phải trả demo là: " << demo << endl;
    return 0;
}
 * */
int main () {
    int a, b,c;
    float x1, x2,delta;
    cout << "nhập phương trình ax2 + bx + c = 0" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 0) {
        cout << "quay về pt bâc 1" << endl;
    } else {
        // a # 0  4 -4-
        delta = b*b - 4*a*c;
        if (delta < 0) {
            cout << " Phương trình vô nghiệm" << endl;
        } else if (delta > 0) {
            x1 = (-b + sqrt(delta))/(2*a);
            x1 = (-b - sqrt(delta))/(2*a);
            cout << "pt có 2 nghiệm riêng biệt" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } else {
            cout << "Phương trình có nghiệm kép" << -b/(2*a) << endl;
        }
    }
    return 0;
}

