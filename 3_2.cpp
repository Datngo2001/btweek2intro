#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout << "moi ban nhap mot so thuc" << endl;
    float f;
    cin >> f;
    cout << "Phan nguyen cua so thuc " << setprecision(1)<<f<<endl;
    system("pause");
}