#include<iostream>
using namespace std;
int main() {
    char c;
    cout << "Nhap 1 ky tu: " << endl;
    cin >> c;
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        cout << "Thuoc 26 chu cai" << endl;
    }else{
        cout << "Khong thuoc" << endl;
    }
	system("pause");
}