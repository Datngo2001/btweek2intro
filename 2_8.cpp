#include<iostream>
using namespace std;
int main(){
    int a,b; 
    cout << "moi ban nhap hai so a b" << endl;
    cin >> a >> b;  
    int max = (a>b)?a:b;
    cout << "Max " << max << endl;
    system("pause");
}