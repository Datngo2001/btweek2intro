#include<iostream>
using namespace std;
int main() {
    int soLuong, donGia;
    cout << "Nhap so luong: " << endl;
    cin >> soLuong;
    cout << "Nhap don gia: " << endl;
    cin >> donGia;
    int Tien = soLuong * donGia;
    float thue = Tien * 0.15;
    cout << "Tien: " << Tien << endl;
    cout << "Thue: " << thue << endl;
	system("pause");
}