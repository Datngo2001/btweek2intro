#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    float a; 
    cout << "Nhap so thuc: " << endl;
    cin >> a;
    int b = (int)a;
    float c = a - b;
    float d = c*100;
    cout << "phan nguyen: "<< fixed << setprecision(0) << a << endl;
    cout << "co 2 chu so thap pha: " << setprecision(2) << a << endl;    
    cout << "2 chu so sau dau phay: " << setprecision(0) << d << endl;
    cout << "Tong phan nguyen va hai so dang dau cham: " << b + d << endl;
    system("pause");
}