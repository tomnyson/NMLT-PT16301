#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "mời chọn chức nâng của chương trình" << endl;
    cout << "press 1: chức năng số 1: " << endl;
    cout << "press 2: chức năng số 2: " << endl;
    cout << "press 3: chức năng số 3: " << endl;
    cout << "press 4: chức năng số 4: " << endl;
    cout << "press 5: chức năng số 5: " << endl;
    cout << "press 0: thoát khỏi chương trình: " << endl;
    cin >> x;
    switch(x) {
        case 1:
            cout << "press 1: chức năng số 1: " << endl;
        break;
        case 2:
            cout << "press 2: chức năng số 2: " << endl;
        break;
        case 3:
            cout << "press 3: chức năng số 3: " << endl;
        break;
        case 4:
            cout << "press 4: chức năng số 4: " << endl;
        break;
        case 5:
            cout << "press 5: chức năng số 5: " << endl;
        break; 
        default:
            cout << "thoát chương trình" << endl;
        break;
    }

    return 0;
}