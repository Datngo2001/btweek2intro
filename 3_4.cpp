#include<iostream>
using namespace std;
int main(){
    cout << "Tinh tien thue phong" << endl;
    cout << "Don gia tuan: 500000. Don gia ngay: 100000" << endl;
    cout << "Nhap vao tong so ngay theu phong: ";
    int soNgay;
    cin >> soNgay;
    int soTuan = soNgay / 7;
    int soNgayLe = soNgay % 7;
    cout << endl;
    cout << "So tuan ma khach thue: " << soTuan << endl;
    cout << "So ngay khach thue: " << soNgayLe << endl;
    int tien = soTuan*500000 + soNgayLe*100000;
    cout << "Tong so tien la: " << tien << endl;
    system("pause");
}