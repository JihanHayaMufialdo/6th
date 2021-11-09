#include <iostream>
using namespace std;

float perpangkatan(float a, float b){
	float hasil=1;
	
	for (int i=0;i<b;i++){
		hasil*=a;
	}	
	return hasil; 
}

int main(){
	cout << perpangkatan(2,3);
}

