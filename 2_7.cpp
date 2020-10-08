#include<iostream>
using namespace std;
int main(){
    cout << "Nhap vao ky tu" << endl;
    char c;
    cin >> c;
    cout << "Ma ASCII cua " << c << " la" << endl;
    char hoa = (c>=97 && c<=122)?(c-32):(c+32);
    cout << hoa << endl;    
    system("pause");
}