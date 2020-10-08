#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout << "moi ban nhap hai so a b" << endl;
    cin >> a >> b;
    float thuong = (float)a / (float)b;
    cout << "Thuong cua a chia cho b: " << thuong << endl;
    cout << "Lam tron thuong: ";
    cout.precision(0);
    cout << thuong << endl;
    cout << "In thuong voi mot chu so thap phan";
    cout.precision(1);
    cout << thuong << endl;
    system("pause");
}