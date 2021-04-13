#include <iostream>
#include "math.h"
using namespace std;
const int MAX = 100;
bool isChinhPhuong (int x) {
    if(sqrt(x) * sqrt(x) == x) return true;
    return false;
//  return sqrt(x) * sqrt(x) == x ?  true : false;
}
bool isNguyenTo (int x) {
    if(x< 2) {
        return false;
    }
    // for(int i = 2 ; i < x ; i++) {
    //     if(x % i == 0) return true;
    // }
    for(int i = 2 ; i < sqrt(x) ; i++) {
        if(x % i == 0) return false;
    }
    return true;
}
void nhapMaTran2Chieu(int matran [MAX][MAX], int dong, int cot) {
    for(int i=0; i< dong; i++) {
        for(int j=0; j< cot; j++) {
            cout << "nhập vị trí a["<< i << "][" << j << "]" << endl;
            cin >> matran[i][j];
        }
    }
}
void xuatMaTran(int matran [MAX][MAX], int dong, int cot) {
     for(int i=0; i< dong; i++) {
        for(int j=0; j< cot; j++) {
            cout << "xuất vị trí a["<< i << "][" << j << "]" << matran[i][j] << endl;
        }
    } 
}
int main() {
    int matran[MAX][MAX];
    /**
     *  để duyệt ma trận 2 chiều thi ta cần 2 vòng lặp for
     * 
     * */
     int dong, cot;
    cout << "nhập số dòng" << endl;
    cin >> dong;
    cout << "nhập số côt" << endl;
    cin >> cot;
    nhapMaTran2Chieu(matran, dong, cot);
    xuatMaTran(matran, dong, cot);
}