#include<iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input(){

    while (true)
    {
        cout << "Masukkan Jumlah elemen pada array (maksimal 10) : ";
        cin >> nPanjang;
            if(nPanjang <= 10){
                break;
            }else{
                cout<<"Jumlah elemen yang anda masukkan melebihi batas yang ditentukan. Silahkan pilih ulang (maksimal 10)"<<endl;
            }
    }

    cout << "=======================" << endl;
    cout << " Masukkan Elemen Array " << endl;
    cout << "=======================" << endl;

    for(int i=0;i < nPanjang; i++){
        cout << "Masukkan Data ke - " << i+1 << " : ";
        cin >> element[i];
    }
}

