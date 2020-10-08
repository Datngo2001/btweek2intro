#include<iostream>
using namespace std;
int main(){
    int i = 1;
    cin >> i;
    int bt = 10 + ++i;
    cout << "Ket qua bieu thuc: 10 + ++i la " << bt << " gia tri cua i la " << i << endl;
    cout << "Khoi tao gia tri cua i " << i << endl;
    i = 1;
    bt = 10 + i++;
    cout << "Ket qua bieu thuc: 10 + ++i la " << bt << " gia tri cua i la " << i << endl;
    system("pause");
}