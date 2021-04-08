#include<iostream>
using namespace std;
void sapXepTangDan(int a[], int n);
void sapXepGiamDan(int a[], int n);
void xuatMang(int a[], int n);
void nhapMang(int a[], int n);
int timGiaTriLonNhat(int a[], int n);
int timGiaTriNhoNhat(int a[], int n);
const int MAX = 100;
void menu() {
    int option;
    int a[MAX];
    int n;
    int lonnhat, nhonhat;
    do {
        cout << "chức năng chương trình:" << endl;
        cout << "1: nhập mảng" << endl;
        cout << "2: xuất mảng" << endl;
        cout << "3: sắp xếp mảng tăng dần" << endl;
        cout << "4: sắp xếp mảng giảm dần" << endl;
        cout << "5: tìm giá trị lớn nhất của mảng" << endl;
        cout << "5: tìm giá trị nhỏ nhất của mảng" << endl;
        cout << "0: exit chương trình" << endl;
        cin >> option;
        switch (option)
        {
        case 1: 
            cout << "nhap so luong phan tu cua mang" << endl;
            cin >> n;
            nhapMang(a, n);
            break;
        case 2: 
            xuatMang(a, n);
            break;
        case 3:
            sapXepTangDan(a, n);
            break;
        case 4:
            sapXepGiamDan(a, n);
        case 5:
            cout << "gia tri lon nhat" << endl;
            lonnhat = timGiaTriLonNhat(a, n);
            cout << "max" << lonnhat << endl;
            break;
        case 6:
            cout << "gia tri nho nhat" << endl;
            nhonhat = timGiaTriNhoNhat(a, n);
            cout << "min" << nhonhat << endl;
        default:
            cout << "no option" << endl;
            break;
        }
    } while (option != 0 );
}

void sapXepTangDan(int a[], int n) {
    int i, j, temp;
    for (i= 0; i < n; i++) {
        for(j = i+1; j< n+1; j++) {
            if(a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sapXepGiamDan(int a[], int n) {
    int i, j, temp;
    for (i= 0; i < n; i++) {
        for(j = i+1; j< n+1; j++) {
            if(a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int timGiaTriLonNhat(int a[], int n) {
    int lonnhat = a[0];
    for (int i= 0; i < n; i++) {
        if (lonnhat > a[i]) {
            lonnhat = a[i];
        }
    }
    return lonnhat;
}

int timGiaTriNhoNhat(int a[], int n) {
    int min = a[0];
    for (int i= 0; i < n; i++) {
        if (min < a[i]) {
            min = a[i];
        }
    }
    return min;
}
void nhapMang(int a[], int n) {
    for (int i= 0; i < n; i++) {
        cout << "nhap phan tu thu: " << i << endl;
        cin >> a[i];
    }
}
void xuatMang(int a[], int n) {
    for (int i= 0; i < n; i++) {
        cout << "mang thu " << i << endl;
        cout << a[i] << endl;
    }
}
