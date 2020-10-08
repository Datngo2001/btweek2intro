#include<iostream>
using namespace std;
int main() {
    char c;
    cout << "Nhap 1 ky tu: " << endl;
    cin >> c;
    if (c >= 65 && c <= 90){
        cout << "Chu hoa" << endl;
    }else if (c >= 97 && c <= 122){
        cout << "Chu thuong" << endl;
    }else{
        cout << "Ky tu khac" << endl;
    }
    system("pause");
}