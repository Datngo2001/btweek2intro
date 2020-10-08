#include<iostream>
using namespace std;
int main(){
    const int namHienTai = 2015;
    int ns; 
    cout << "Nhap nam sinh" << endl;
    cin >> ns;
    int tuoi = namHienTai - ns;
    cout << "Tuoi " << tuoi << endl;
    system("pause");
}