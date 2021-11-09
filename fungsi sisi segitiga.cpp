#include <iostream>
using namespace std;

bool valid_triangle(float a, float b, float c)
{
       if(a>0 && b>0 && c>0)
		if (a+b>c && a+c>b && b+c>a)
           return true;
    
	else 
	    return false;
}

int main()
{
	float a,b,c;
	cin >> a >> b >> c ;
	if (valid_triangle (a,b,c)){
		cout << "TRUE" ;
	}
	else{
		cout << "FALSE" ;
    } 
}
