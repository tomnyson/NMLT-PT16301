#include<iostream>
#include"string.h"
#include <stdlib.h>
using namespace std;
int main () {
     system( "color 1A" );
    // c
    // char hoten[30];
    // cout << "nhap ho va ten" << endl;
    // gets(hoten);
    // //c++;
    // string noisinh;
    // cout << "noi sinh" << endl;
    // getline( cin, noisinh);
    //   cout << "Tên là:" << hoten << endl;
    //     cout << "Nơi sinh:" << noisinh << endl;
    // tinh độ dài của chuỗi;
    string hoten = "hong le  son";
    string hoten1 = "le hong son";
    string subTen =  "aa";
    string chuoinoi;
    chuoinoi  = hoten;
    cout << hoten.find(subTen) << endl;
    if(hoten.find(subTen) != string::npos) {
        cout << "xuat hien" << endl;
    }
    cout << hoten.compare(hoten1) << endl;
     cout << chuoinoi << endl;
    for(int i=0; i< hoten.size(); i++) {
        cout << hoten[i];
    }
    
    sort(hoten.begin(), hoten.end());
     cout << hoten << endl;
    return 0;
}