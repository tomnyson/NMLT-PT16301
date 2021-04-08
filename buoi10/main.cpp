#include <iostream>
using namespace std;

bool isChan(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    return false;
}
int tong(int a, int b)
{
    return a + b;
}
int tich(int a, int b)
{
    return a * b;
}
// void nhapMang(int n) {
//     int a[n];
//     for(int i =0; i< n; i++) {
//         cout << "mang thu i" << i << endl;
//         cin >> a[i];
//     }
// }
bool timKiemGiatri(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    /**
     * day la mang kieu du lieu la so nguyen va gom co 5 phan tus
     * */
    // int mangMotChieu[] = {0,4,5,6,7};
    // cout << "a[0]" << mangMotChieu[0];
    // for(int i =0; i<5 ; i++) {
    //     cout << "a[" << i << "]" << mangMotChieu[i] << endl;
    // }
    // int a[5];
    // for(int i=0; i < 5; i++ ) {
    //     cout << "nhập giá trị mạng thứ " << i << endl;
    //     cin >> a[i];
    // }

    int a[] = {1, 2, 5, 7, 9, 2, 4, 5};
    // int sum = 0;
    // for(int i=0; i < 5; i++ ) {
    //   sum = sum + a[i]; // sum+=a[i]
    // }
    // cout << "sum" << sum << endl;
    // nhapMang(5);
    int x = 2;
    int dem = 0;
    for (int i = 0; i < 8; i++)
    {
        if (a[i] == x)
        {
            cout << "x: " << x << "có trong mảng" << endl;
            dem++;
        }
    }
    if (dem > 0)
    {
        cout << "so" << x << "xuat hien" << dem << "lan" << endl;
    }
    bool ketqua = timKiemGiatri(a, 8, 2);
    if (ketqua == true)
    {
        cout << "da tim thay x" << x << endl;
    }
    return 0;
}