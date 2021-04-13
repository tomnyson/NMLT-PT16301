
#include<iostream>
#include"string.h"
using namespace std;

struct SinhVien {
    int massv;
    string hovaten;
    float dtb;
    string nganhhoac;
};
void nhapSinhVien(SinhVien &sv1) {
    cout << "nhập mssv" << endl;
    cin >> sv1.massv;
    cout << "nhập họ tên" << endl;
    cin >> sv1.hovaten;
     cout << "nhập nhành học" << endl;
    cin >> sv1.nganhhoac;
}
void XuatSinhVien(SinhVien sv1) {
    cout << "nhập mssv" << sv1.massv << endl;
    cout << "nhập họ tên" << sv1.hovaten << endl;
    cout << "nhập nhành học" << sv1.nganhhoac << endl;
}

int main () {
SinhVien sv1;
nhapSinhVien(sv1);
XuatSinhVien(sv1);
return 0;
}
