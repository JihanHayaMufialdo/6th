#include <iostream>
using namespace std;

void TukarBilangan(int X,int Y)
{
    int Z=X;
    
    X=Y;
    Y=Z;
        
    cout << "Di dalam fungsi" <<endl;
    cout << "Bilangan ke-1 : " << X <<endl;
    cout << "Bilangan ke-2 : " << Y <<endl;
    cout<<endl;
}


int main()
{
    
    int bilangan1, bilangan2;
    
    cout << "Masukkan Bilangan Pertama : " ; 
	cin>>bilangan1;
    cout << "Masukkan Bilangan Kedua   : " ; 
	cin>>bilangan2;
    cout <<endl;

    cout<<"Keadaan awal"<<endl;
    cout<<"Bilangan ke-1 : "<<bilangan1<<endl;
    cout<<"Bilangan ke-2 : "<<bilangan2<<endl;
    cout<<endl;
    
    TukarBilangan(bilangan1, bilangan2);

    cout<<"Keadaan Akhir"<<endl;
    cout<<"Bilangan ke-1 : "<<bilangan1<<endl;
    cout<<"Bilangan ke-2 : "<<bilangan2<<endl;
    cout<<endl;

    return 0;
}
