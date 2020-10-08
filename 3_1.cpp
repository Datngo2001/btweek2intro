#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    cout << "Gia tri cua i la 3" << endl;
    int result = 20 + ++i + i++;
    cout << "Bieu thuc 20 + ++i + i++ co ket qua la: " << result << ";" << "i = " << i;
    system("pause");
}