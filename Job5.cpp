#include <iostream>
#include <iomanip>
#include <string>
#include <bitset>

using namespace std;
unsigned int x,n_bit,xc8,d,xc16;
string x8="",x16="";
int main(){
   
    cout << u8"введите х: ";
    cin >> x;
    cout << u8"введите нормер бита от 0 до 31: ";
    cin >> n_bit;
    d = (x ^ (1 << n_bit));
    xc8 = d;
    xc16 = d;
        while(xc8 > 0){
        x8 = to_string(xc8 % 8) + x8;
        xc8 = xc8 / 8;
    }
        while(xc16 > 0){
        x16 = to_string(xc16 % 16) + x16;
        xc16 = xc16 / 16;
    }
    cout << u8"десятеричная: " << d << endl;
    cout << u8"восьмеричная: " << x8 << endl;
    cout <<u8"шестнадцатиричная: " <<  x16;
return 0;
}