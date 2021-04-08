#include <iostream>
using namespace std;

int main()
{
    // in tu 0- 5 break: thoat khoi vong lap countinue: bo qua gia tri va tiep tuc vong lap
    // xuất chẵn
    int tong =  0;
    for (int i = 1; i <=5 ; i++)
    {
        tong+= i; // tong = tong + i
        // if (i % 2 == 0)
        // {
        //     if (i % 3 == 0)
        //     {
        //         cout << "i =" << i << " là số cho 2 va 3" << endl;
        //     }
        //     else
        //     {
        //         cout << "i =" << i << " là số chẵn" << endl;
        //     }
        // }
        // else
        // {
        //     cout << "i = " << i << " là số số lẻ" << endl;
        // }
      
    }
    cout << "tong" << tong << endl;
    return 0;
}