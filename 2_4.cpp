#include<iostream>
using namespace std;
int main(){
    int a,b; 
    cout << "moi ban nhap hai so a b" << endl;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = (float)a/(float)b;
    cout << "Tong = " << tong << endl;
    cout << "Hieu = " << hieu << endl;
    cout << "Tich = " << tich << endl;
    cout << "Thuong = " << thuong << endl;
    system("pause");
}