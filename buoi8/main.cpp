#include <iostream>
using namespace std;

/**
 *  void: khong return ve gia trị
 * calmCase
 * */
// cau so 1;
// bool return true | false
bool isChan(int x) {
    if(x % 2 == 0) {
        return true;
    }
    return false;
}
void loadBoSoBatKi(int n, int x) {
    int i = 10;
    while(i >=0) {
        // cout << "x" << x << endl;
        if(i == 2 || i == 5) {
            i--;
            continue;
        } else {
            cout << "i" << i << endl;
        }
        i--;
    }
    return;
}

void xuatLe(int n) {
    int i = 10;
    while(i >=0) {
        if(isChan(i)) {
            cout << "i" << i << endl;
        }
        i--;
    }
    return;
}

void TinhTong() {
    int a, b;
    do {
        cout << "nhap gia tri a" << endl;
        cin >> a;
    } while(a < 0);
    do {
        cout << "nhap gia tri b" << endl;
        cin >> b;
    } while(b < 0);
    cout <<  "tong: " << a + b << endl;
    return;
}

int main () {
    // loadBoSoBatKi(10, 2);
    // xuatLe(10);
    TinhTong();
    return 0;
}