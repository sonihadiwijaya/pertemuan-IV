#include <iostream>

using namespace std;
int maks (int a,int b);
int main(){
int a,b;

cout << "masukan nilai a : " ;
cin >> a;
cout << "masukan nilai b : " ; 
cin >> b;


 cout<< "Nilai maksimum adalah : " <<maks(a,b) ;
	return 0;
}

 int maks (int a, int b) {
	if (a>b) {
		return a;
	} 
	else if (a<b) { 
	return b;
	} else {
 		return 0 ;
	}
}
