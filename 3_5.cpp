#include<iostream>
using namespace std;
int main() {
    cout << "gio vao gio ra: "<< endl;
    int vao, ra;
    cin >> vao >> ra;
    cout << "So binh nuoc: " << endl;
    int soBinh;
    cin >> soBinh;
    int tienGio = (ra - vao)*200000;
    int tienNuoc = soBinh*20000;
    int tongTien = tienGio + tienNuoc;
    cout << "Tien gio: " << tienGio << endl;
    cout << "Tien nuoc: " << tienNuoc << endl;
    cout << "Tong: " << tongTien << endl;
    system("pause");
}