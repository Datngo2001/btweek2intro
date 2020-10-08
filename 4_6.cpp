#include<iostream>
using namespace std;
int main() {
    float a,b ;
    cout << "ax+b nhap a va b: "<< endl;
    cin >> a >> b;
    while (a == 0)
    {
        cout << "a = 0, nhap lai a: " << endl;
        cin >> a;
    }
    float sol = a/b;
    cout << "Nghiem la: "<< sol << endl;
	system("pause");
}