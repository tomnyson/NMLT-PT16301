/**
 * 
 * câu 1:
 * Tính tiền karaoke
 * Giá tiền 3 giờ đầu là 150000, bắt đầu giờ thứ 4 giảm 30%. 
 * Quán chỉ hoạt động trong khoảng giờ từ 12 giờ 23 giờ.
 * 
 * câu 2:
 * nhập vào 1 số bất kì x< 100 && x > 100  liêt kê các số chính phương trong dãy đó
 * Số chính phương là số bằng bình phương đúng của một số nguyên. Hay hiểu đơn giản,
 *  số chính phương là một số tự nhiên có căn bậc hai cũng là một số tự nhiên. (i*i == x)
 * câu 3:
 *  xây dựng menu cho 2 bài trên chon chức năng 1 thực hiện bài 1.
 *  chon 2 thực hiện 2 , nhấn 0 để thoát
 * */
#include <iostream>
using namespace std;
#include <math.h>
void tinhTienKaraoke() {
    int gioBD, gioKT;
    float tongTien = 0;
    do {
        cout << "Nhập giờ bắt đầu " << endl;
        cin >> gioBD;
    } while(gioBD < 12 && gioBD > 23);

     do {
        cout << "Nhập giờ ket thuc " << endl;
        cin >> gioKT;
    } while( (gioKT < 12  || gioKT > 23) || (gioKT < gioBD));
    int soGioSudung = gioKT - gioBD;
    if (soGioSudung <= 3) {
        tongTien += soGioSudung*150000; 

    } else {
        tongTien+= 3*150000 + (soGioSudung-3)*0.7*150000;
    }
    cout << "so gio su dung" << tongTien << endl;
    return;
}
bool isChinhPhuong(int n) {
   return sqrt(float(n)) == (int)sqrt((float)n);
}

void LietKeSoChinhPhuong() {
    int x;
    do{
        cout << "nhập số x" << endl;
        cin >> x;
    } while(x <0 || x > 100);
    int i = x;
    while (x >= 0) {
        if(isChinhPhuong(i)) {
             cout << "so chinh phuong la" << i << endl;
        }   
        i--;
    }
    return;
}

void menu() {
    int luachon;
        do {
            cout << "nhap 1: chon bai 1, 2 chon bai 2, 0: thoat" << endl;
            cin >> luachon;
        } while( luachon < 0 || luachon > 2);
        switch (luachon)
        {
        case 1:
            cout << "ban da chon bai 1" << endl;
            tinhTienKaraoke();
            break;
        case 2:
            cout << "ban da chon bai 2" << endl;
            LietKeSoChinhPhuong();
            break;
        default:
            exit(10);
            break;
        }
}
int main () {
    menu();
}