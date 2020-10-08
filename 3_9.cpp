#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int namSinh;
    const int namHienTai = 2020;
    cout << "Nhap nam sinh: " << endl;
    cin >> namSinh;
    int tuoi = namHienTai - namSinh;
    if (tuoi >= 18){
        cout << "Toi tuoi di lam."<< endl;
    }else{
        cout << "Còn tuoi di hoc."<< endl;
    }
    system("pause");
}