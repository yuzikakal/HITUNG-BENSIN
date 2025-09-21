#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

istream& uppercase(istream& in, string& line) {
    getline(in, line);
    transform(line.begin(), line.end(), line.begin(), ::toupper);
    return in;
}

int main() {
    int HJPL = 10000, HJPX = 13100, HJBS = 6500, HJDL = 14600; // Harga jual per liter
    string JK; // Jenis bahan bakar kendaraan
    int JL; // Jumlah liter
    int HJ;

    cout << "Masukkan jenis bahan bakar kendaraan (SOLAR / NONSOLAR): ";
    uppercase(cin, JK);    
    string JS; // Jenis bahan bakar spesifik

    if (JK == "SOLAR") {
        cout << "Masukkan jumlah liter: "; 
        cin >> JL;
        cin.ignore();
        cout << "Masukkan jenis SOLAR (DEXLITE / BIOSOLAR): ";
        uppercase(cin, JS);
        if (JS == "DEXLITE") {
            HJ = HJDL * JL;
        }
        else if (JS == "BIOSOLAR" || JS == "BIO SOLAR"){
            HJ = HJBS * JL;        
        }else {
            cout << "Jenis bensin tidak valid" << endl;
            return 0;
        }

    } else if (JK == "NONSOLAR" || JK == "NON SOLAR") {
        cout << "Masukkan jumlah liter: "; 
        cin >> JL;
        cin.ignore();
        cout << "Masukkan jenis NON SOLAR (PERTALITE / PERTAMAX): ";
        uppercase(cin, JS);
        if (JS == "PERTALITE") {
            HJ = HJPL * JL;
        } else if (JS == "PERTAMAX") {
            HJ = HJPX * JL;
        } else {
            cout << "Jenis bensin tidak valid" << endl;
            return 0;
        }
    } else {
        cout << "Jenis bensin tidak valid" << endl;
        return 0;
    }

    int PPN, HB;
    PPN = HJ * 10 / 100;
    HB = HJ + PPN;

    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "         DETAIL PEMBAYARAN         " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Bahan Bakar Yang Dibeli: " << JS << endl;
    cout << "Jumlah Liter           : " << JL << " L" << endl;
    cout << "Harga Bahan Bakar      : Rp." << HJ << endl;
    cout << "Pajak                  : 10%" << endl;
    cout << "Total Pembayaran       : Rp." << HB << endl;
    cout << "-----------------------------------" << endl;
    cout << "  Terima Kasih Telah Bertransaksi  " << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;

    return 0;

}
