#include <iostream>
using namespace std;

int main (){
	float r;
	float phi = 3.14;
	
	cout << "\n----- LINGKARAN -----\n\n";
	cout << "jari-jari (m) : ";
	cin  >> r; 
	
	cout << "\nKeliling : " << 2*phi*r << " m\n";
	cout << "Luas\t : " << phi*r*r << " m^2";
}
