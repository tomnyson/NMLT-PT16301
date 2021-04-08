#include <iostream>
using namespace std;
int main()
{
    // case 1, 3,5,7,8,10,12 => 31
    // case 4,6,9,11 => 30
    // case 2 28|| 29 nay
    int thang;
    cout << "mời bạn nhập số tháng 1->12" << endl;
    cin >> thang;
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 ngày" << endl;
    break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 ngày" << endl;
    break;
    case 2:
        cout << "28 || 29 ngày" << endl;
        break;
    default:
            cout << "só tháng không đúng" << endl;
        break;
    }
}