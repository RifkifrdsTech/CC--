#include <iostream>
using namespace std;

int main() {
    char customer[30];
    int pil_kategori, harga_kategori, minuman_makanan, harga_mkn = 0, total, lama_inap;
    string fixkam, tgl_masuk, tgl_keluar;

    // Header
    cout << "========================================================================" << endl;
    cout << "                     SELAMAT DATANG DI HOTEL JAGUAR" << endl;
    cout << "                    JL. Veteran No 12, Kota Tangerang" << endl;
    cout << "========================================================================" << endl;
    cout << endl;

    // Menampilkan kategori kamar
    cout << "Kategori Kamar Yang Tersedia" << endl;
    cout << "========================================================================" << endl;
    cout << "1. Single  - Rp. 500.000" << endl;
    cout << "2. Double  - Rp. 800.000" << endl;
    cout << "3. Suite   - Rp. 1.000.000" << endl;
    cout << "========================================================================" << endl;
    cout << endl;

    // Tambahan Menampilan Awal By Rifki
    cout << "Makanan Dan Minuman " << endl;
    cout << "========================================================================" << endl;
    cout << "1. Nasi Goreng + Manggo Jus - Rp. 20.000" << endl;
    cout << "2. Bakso + Tea Ice          - Rp. 30.000" << endl;
    cout << "3. Mie Ayam + Water Drink   - Rp. 15.000" << endl;
    cout << "========================================================================" << endl;
    cout << endl;


    // Form input data
    cout << "========================================================================" << endl;
    cout << "Silahkan Isi Form Di Bawah Ini" << endl;
    cout << "========================================================================" << endl;
    cout << "Nama Pemesan: ";
    cin >> customer;
    cout << endl;

    // Tambahan Memilih Makanan Dan Minuman
    cout << "Pilih Makanan Dan Minuman Yang Di Inginkan (1-3): ";
    cin >> minuman_makanan;
    cout << endl;

    // Memilih kategori kamar
    cout << "Pilih Kamar Yang Anda Inginkan (1-3): ";
    cin >> pil_kategori;
    cout << endl;

   // Validasi Dan Menentukan Harga Makan minum
   switch (minuman_makanan) {
        case 1:
            fixkam = "Nasi Goreng + Manggo Jus";
            harga_mkn = 20000;
            break;
        case 2:
            fixkam = "Bakso + Tea Ice";
            harga_mkn = 30000;
            break;
        case 3:
            fixkam = "Mie Ayam + Water Drink";
            harga_mkn = 15000;
            break;
        default:
        cout  << "Salah input, silakan ulangi dari awal." << endl;
        return 0;
   }

    // Validasi dan menentukan harga kamar
    switch (pil_kategori) {
        case 1:
            fixkam = "Kamar Single";
            harga_kategori = 500000;
            break;
        case 2:
            fixkam = "Kamar Double";
            harga_kategori = 800000;
            break;
        case 3:
            fixkam = "Kamar Suite";
            harga_kategori = 1000000;
            break;
        default:
            cout << "Salah input, silakan ulangi dari awal." << endl;
            return 0; // Menghentikan program jika salah input
    }

    // Input tanggal dan lama inap
    cout << "Tanggal Masuk  (DDMMYY) : ";
    cin >> tgl_masuk;
    cout << "Tanggal Keluar (DDMMYY) : ";
    cin >> tgl_keluar;
    cout << "Lama Inap (hari): ";
    cin >> lama_inap;
    cout << endl;

    // Menghitung total harga kamar
    total = lama_inap * harga_kategori + harga_mkn;

    // Output data pemesanan
    cout << "========================================================================" << endl;
    cout << "                         DETAIL PEMESANAN KAMAR" << endl;
    cout << "========================================================================" << endl;
    cout << "Nama Pemesan              : " << customer << endl;
    cout << "Tipe Kamar                : " << fixkam << endl;
    cout << "Makanan Dan Minuman       : "<< fixkam  << endl;
    cout << "Lama Inap                 : " << lama_inap << " hari" << endl;
    cout << "Tanggal Masuk             : " << tgl_masuk << endl;
    cout << "Tanggal Keluar            : " << tgl_keluar << endl;
    cout << "Harga Perhari             : Rp. " << harga_kategori << endl;
    cout << "Harga Makanan Dan Minuman : Rp. " << harga_mkn << endl;
    cout << "Total Harga               : Rp. " << total << endl;
    cout << "========================================================================" << endl;
    cout << "Terima kasih telah memilih Hotel Jaguar sebagai tempat peristirahatan Anda!" << endl;
    cout << endl;

    return 0;
}
