#include <iostream>
using namespace std;

void InputArray(int a[],int n)
{
    for (int i=0; i<n; i++){	
        cout<<"Masukkan nilai A["<<i<<"] : ";
		cin>>a[i];
    }
}

long jumlah(int a[], int n)
{
    long total=0;

    for (int i=0; i<n; i++){
        total += a[i];
    }

    return total;
}

//Fungsi utama
int main(){
    int X[100];  //Elemen maksimal adalah 100
    int BanyakElemen;
    long HASIL;

    cout<<"Masukkan banyaknya elemen yang diinginkan : ";
	cin>>BanyakElemen;
    cout<<endl;

    //Memanggil fungsi InputArray
    InputArray(X, BanyakElemen);

    //Memanggil fungsi jumlah dan menampung hasilnya
    //Ke Variabel HASIL
    HASIL=jumlah(X, BanyakElemen);

    //Menampilkan hasil
    cout<<"\nHasilnya = "<<HASIL<<endl;

    return 0;
}
