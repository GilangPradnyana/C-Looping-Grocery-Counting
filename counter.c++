#include <iostream>
using namespace std;

int main() {
    double harga[5];        // array untuk menampung harga 5 barang
    double total = 0;       // total harga semua barang
    char member;            // status member (y/n)
    double diskon = 0;      // nilai diskon
    double totalBayar;      // total harga setelah diskon

    cout << "=== Program Hitung Total Harga Barang ===" << endl;

    // Input harga 5 barang
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan harga barang ke-" << i + 1 << ": ";
        cin >> harga[i];
        total += harga[i];
    }

    // Input status member
    cout << "Apakah Anda member? (y/n): ";
    cin >> member;

    // Logika diskon untuk member
    if (member == 'y' || member == 'Y') {
        if (total > 1000000)
            diskon = 0.12;
        else if (total > 500000)
            diskon = 0.10;
        else if (total > 100000)
            diskon = 0.05;
        else
            diskon = 0.0;
    }
    // Logika diskon untuk non-member
    else {
        if (total > 1000000)
            diskon = 0.06;
        else if (total > 500000)
            diskon = 0.04;
        else if (total > 100000)
            diskon = 0.02;
        else
            diskon = 0.0;
    }

    // Hitung total bayar setelah diskon
    totalBayar = total - (total * diskon);

    // Output hasil
    cout << "\n=== Rincian Pembelian ===" << endl;
    cout << "Total harga sebelum diskon : Rp " << total << endl;
    cout << "Diskon                     : " << (diskon * 100) << "%" << endl;
    cout << "Total yang harus dibayar   : Rp " << totalBayar << endl;

    return 0;
}
