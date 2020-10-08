#include<iostream>
using namespace std;
int main(){
    int nv, nr;
    cout << "nhap ngay vao ngay ra" << endl;
    cin >> nv >> nr;
    int tong = nr - nv; 
    cout << "Tong so ngay o trong thang " << tong << endl;
    int tien = tong/7 * 700 + tong%7 * 150;
    cout << "Tien phai thanh toan la " << tien << endl;
    system("pause");
}