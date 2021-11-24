#include <iostream>
using namespace std;

void persegi(){
	float s;
	
	cout << "\n------ PERSEGI ------\n\n";
	cout << "sisi (m) : ";
	cin  >> s; 
	
	if(s!=0){
	cout << "Keliling : " << 4*s << " m\n";
	cout << "Luas\t : " << s*s << " m^2";
	}
}

void persegipanjang(){
	float p,l;
	
	cout << "\n---- PERSEGI PANJANG ----\n\n";
	cout << "panjang (m) : ";
	cin  >> p; 
	cout << "lebar (m)   : ";
	cin  >> l;
	
	if(p!=0 && l!=0){
	cout << "\nKeliling : " << 2*(p+l) << " m\n";
	cout << "Luas\t : " << p*l << " m^2";
	}
}



void lingkaran(){
	float r;
	float phi = 3.14;
	
	cout << "\n----- LINGKARAN -----\n\n";
	cout << "jari-jari (m) : ";
	cin  >> r; 
	
	cout << "\nKeliling : " << 2*phi*r << " m\n";
	cout << "Luas\t : " << phi*r*r << " m^2";
}




