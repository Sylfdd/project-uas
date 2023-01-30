#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float saldo;
};

Mahasiswa data[40]; 
int jumData = 0; 

void tambahData() {
    cout <<"Masukkan NIM	:"; cin >> data[jumData].nim;
    cout <<"Masukkan Nama	:";	cin >> data[jumData].nama;
    cout <<"Masukkan Saldo Awal :"; cin >> data[jumData].saldo;
    jumData++;
}

void cetakData() {
	system ("cls");
    for (int i = 0; i < jumData; i++) {
        cout <<"NIM	:"<< data[i].nim << endl;
        cout <<"Nama	:"<< data[i].nama << endl;
        cout <<"Saldo	:"<< data[i].saldo << endl;
    }
}

void tambahSaldo() {
    string nim;
    int minggu;
    float jumlah;
    cout <<"Masukkan NIM :";   
	cin >> nim;
	cout <<"Minggu Ke :";
	cin >> minggu;
    cout <<"Masukkan Jumlah	:";    
	cin >> jumlah;
    for (int i = 0; i < jumData; i++) {
        if (data[i].nim == nim) {
            data[i].saldo += jumlah;
            cout << "Saldo berhasil ditambahkan!" << endl;
        }
    }
    
}

void keluar(){
	
}

int main (){
    int pilihan; 
    char ulang;
    do {
        cout << "=======SELAMAT DATANG DI PROGRAM=====" << endl;
        cout << "=====PEMBAYARAN UANG KAS MAHASISWA=====" << endl;
    	cout << "\nSilahkan pilih opsi dibawah ini:\n" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Cetak Data Mahasiswa" << endl;
        cout << "3. Tambah Saldo Mahasiswa" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan :"; 
		cin >> pilihan;
		
        switch (pilihan) {
            case 1:
            	system ("cls");
                tambahData();
                break;
            case 2:
            	system ("cls");
                cetakData();
                break;
            case 3:
            	system ("cls");
                tambahSaldo();
                break;
            case 4:
            	system ("cls");
            	keluar();
            	break;
	}
            }

	while (ulang != 't');
	cout << endl;
	cout << "==========="<<endl; 
	return 0;
}
