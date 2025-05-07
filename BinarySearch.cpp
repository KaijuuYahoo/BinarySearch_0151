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

void BubbleSort(){
    int pass =1;
    do
    {
        for (int j =0; j <= nPanjang-1-pass;j++){
            if (element[j] > element[j+1])
            {
                int temp = element[j];
                element[j] = element [j+1];
                element[j+1] = temp;
            }
        }
        pass++;
    } while (pass <= nPanjang - 1);
}

void display(){
    cout << "=====================================" << endl;
    cout << " Elemen Array Setelah Diurutkan (Asc)" << endl;
    cout << "=====================================" << endl;
    for(int j = 0 ; j < nPanjang ; j++){
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " --> ";
        }
    }
    cout<< endl;
}

void BinarySearch(){
    char ulang;
    do
    {
        cout << "=====================================" << endl;
        cout << " Elemen Array Setelah Diurutkan (Asc)" << endl;
        cout << "=====================================" << endl;
        cout << "Masukkan Elemen yang Ingin dicari : " ;
        cin >> x ;
        int low = 0;
        int high = nPanjang - 1;
        do
        {
            int mid = (low + high)/2;
            if (element[mid] == x)
            {
                cout << "\n[v] Element " << x << " ditemukan pada indeks " << mid << "."<< endl;
                return;
            }
            if (x < element[mid]){
                high = mid - 1;
            }
            if (x > element[mid]){
                low = mid + 1;
            }
        } while (low <= high);

        if(low > high){
            cout << "[v] Element " << x << " Tidak ditemukan dalam Array.\n";
        }
        cout<< "Ingin Mencari Lagi ? (Y/N) : ";
        cin >> ulang ;
    } while (ulang == 'y' || ulang == 'Y');
}

int main (){
    input();
    BubbleSort();
    display();
    BinarySearch();
}