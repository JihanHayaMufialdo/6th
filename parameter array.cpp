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

int main(){
    int X[100];  //Elemen maksimal adalah 100
    int BanyakElemen;
    long hasil;

    cout<<"Masukkan banyaknya elemen yang diinginkan : ";
    cin>>BanyakElemen;
    cout<<endl;

    InputArray(X, BanyakElemen);

    hasil=jumlah(X, BanyakElemen);

    cout<<"\nHasilnya = "<<hasil<<endl;

    return 0;
}
