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

void segitiga(){
	float a,t,s1,s2;
	
	cout << "\n------ SEGITIGA ------\n\n";
	cout << "alas (m)   : ";
	cin  >> a; 
	cout << "tinggi (m) : ";
	cin  >> t;
	cout << "sisi 1 (m) : ";
	cin  >> s1;
	cout << "sisi 2 (m) : ";
	cin  >> s2;
	
	if(a!=0 && s1!=0 && s2!=0){
	cout << "\nKeliling : " << a+s1+s2 << " m\n";
	}
	
	if(a!=0 && t!=0){
	cout << "Luas\t : " << (a*t)/2 << " m^2";
	}
}

void trapesium(){
	float a,b,t,s;
	
	cout << "\n------- TRAPESIUM -------\n\n";
	cout << "sisi atas (m)    : ";
	cin  >> a; 
	cout << "sisi bawah (m)   : ";
	cin  >> b;
	cout << "tinggi (m)       : ";
	cin  >> t;
	cout << "sisi samping (m) : ";
	cin  >> s;
	
	if(s!=0 && a!=0 && b!=0){
	cout << "\nKeliling : " << 2*s+a+b << " m\n";
	}
	
	if(a!=0 && b!=0 && t!=0){
	cout << "Luas\t : " << ((a+b)*t)/2 << " m^2";
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




