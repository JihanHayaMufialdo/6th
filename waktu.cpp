#include <iostream>
#include <windows.h>

using namespace std;

void waktu();


int main(){
	waktu();
}

void waktu(){
	
	int n;
	
	for(int i=n; i>=0 ; i--){
		cout << "waktu : ";
		cout << i;
		Sleep(1000);
		system("cls");
	}
}

