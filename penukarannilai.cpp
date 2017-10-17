#include <iostream>
using namespace std;

int a,b,c, temp;
void masukannilai();
void proses();
void hasilnilai();

int main(){

masukannilai();
proses();
hasilnilai();

}

void masukannilai(){
cout << "masukkan bilangan 1: "; cin >> a;
cout << "masukkan bilangan 2: "; cin >> b;
cout << "masukkan bilangan 3: "; cin >> c;
}

void proses(){
temp = c;
c = b;
b = a;
a = temp;
}

void hasilnilai(){
cout << " bilangan 1 sekarang menjadi  : " << a <<endl;
cout << " bilangan 2 sekarang menjadi  : " << b <<endl;
cout << " bilangan 3 sekarang menjadi  : " << c <<endl;

}

    
