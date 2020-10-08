#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a, b; 
    cout << "nhap 2 canh hinh chu nhat: " << endl;
    cin >> a >> b;
    int chuVi = 2*(a+b);
    int dienTich = a*b;
    float duongCheo = sqrt(a^2 + b^2);
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;
    cout << "Duong cheo: " << duongCheo << endl;
	system("pause");
}