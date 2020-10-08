#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout << "moi ban nhap mot so thuc" << endl;
    float f;
    cin >> f;
    cout << "Phan nguyen cua so thuc " << setprecision(1)<<f<<endl;
    cout << "In so thuc co hai chu so thap phan " << setprecision(3)<<f<<endl;
    system("pause");
}