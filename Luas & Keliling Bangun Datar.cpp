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
	
	if(r!=0){
	cout << "\nKeliling : " << 2*phi*r << " m\n";
	cout << "Luas\t : " << phi*r*r << " m^2";
	}
}

void layanglayang(){
	float d1,d2,s1,s2;
	
	cout << "\n----- LAYANG-LAYANG -----\n\n";
	cout << "diagonal 1 (m) : ";
	cin  >> d1; 
	cout << "diagonal 2 (m) : ";
	cin  >> d2;
	cout << "sisi 1 (m) : ";
	cin  >> s1;
	cout << "sisi 2 (m) : ";
	cin  >> s2;
	
	if(s1!=0 && s2!=0){ 
	cout << "\nKeliling : " << 2*(s1+s2) << " m\n";
	}
	
	if(d1!=0 && d2!=0){
	cout << "Luas\t : " << (d1*d2)/2 << " m^2";
	}
}

void jajargenjang(){
	float a,t,s;
	
	cout << "\n----- JAJAR GENJANG -----\n\n";
	cout << "alas (m)         : ";
	cin  >> a; 
	cout << "tinggi (m)       : ";
	cin  >> t;
	cout << "sisi samping (m) : ";
	cin  >> s;
	
	if(a!=0 && t!=0){ 
	cout << "\nLuas\t : " << a*t << " m^2";
	}
	
	if(a!=0 && s!=0){
	cout << "\nKeliling : " << 2*(a+s)<< " m\n";
	}
}

void belahketupat(){
	float s,d1,d2;
	
	cout << "\n----- BELAH KETUPAT -----\n\n";
	cout << "sisi (m)       : ";
	cin  >> s; 
	cout << "diagonal 1 (m) : ";
	cin  >> d1;
	cout << "diagonal 2 (m) : ";
	cin  >> d2;
	
	if(s!=0){
	cout << "\nKeliling : " << 4*s<< " m\n";
	}
	
	if(d1!=0 && d2!=0){
	cout << "\nLuas\t : " << (d1*d2)/2 << " m^2";
	}
}

int main(){
	
	int pilih;
	cout << "= LUAS DAN KELILING BANGUN DATAR =\n";
	cout << "1. Persegi\n";
	cout << "2. Persegi Panjang\n";
	cout << "3. Segitiga\n";
	cout << "4. Trapesium\n";
	cout << "5. Lingkaran\n";
	cout << "6. Layang-Layang\n";
	cout << "7. Jajar Genjang\n";
	cout << "8. Belah Ketupat\n";
	cout << "\npilih : ";
	cin >> pilih;
	cout << "\n\n";
	
	switch(pilih){
		case 1 : 
			persegi();
			break;
		case 2 : 
			persegipanjang();
			break;
		case 3 : 
			segitiga();
			break;
		case 4 : 
			trapesium();
			break;
		case 5 : 
			lingkaran();
			break;
		case 6 : 
			layanglayang();
			break;
		case 7 : 
			jajargenjang();
			break;
		case 8 : 
			belahketupat();
			break;
		default : 
			cout << "tidak terdaftar";
	}
}

