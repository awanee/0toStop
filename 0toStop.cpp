#include <iostream> // library C++ merakyat;

using namespace std; // pake ini kalo coutnya gak mau panjang;

int main() {
    int angka, total = 0; // deklarasi variabel dan khusus untuk total harus dikasih nilai awal 0;

    cout << "x_Program Tekan Angka 0 Untuk Memberhentikan Perulangan_x\n\n"; // judul program;
    cout << "(Masukkan Angka 0 Untuk Berhenti!)\n"; // instruksi program;

    do { // perulangan do while;    
        cout << "Masukkan Angka: "; // meminta user untuk memasukkan data angka;
        cin >> angka;
        total += angka; // jumlah data angka yang sudah dimasukkan akan dijumlahkan dengan instrumen ini;
    } while (angka != 0); // jika data angka tidak sama dengan 0 maka program akan terus berjalan;

    cout << "\nKamu Telah Memasukkan Total Angka Sebanyak " << total << endl; // cetak jumlah data angka yang sudah dimasukkan sebelumnya;
}