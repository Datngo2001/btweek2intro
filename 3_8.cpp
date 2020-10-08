#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "nhap 3 so nguyen: "<< endl;
    cin >> a >> b >> c;
    int minNum = a;
    int maxNum = a;
    if (minNum > b){
        minNum = b;
    }
    if (minNum > c) {
        minNum = c;
    }
    if (maxNum < b){
        maxNum = b;
    }
    if (maxNum < c) {
        maxNum = c;
    }
    cout << "Max: " << maxNum << endl;
    cout << "Min: " << minNum << endl;
    system("pause");
}