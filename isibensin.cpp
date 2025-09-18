#include <iostream>
#include <string>
using namespace std;

int main() {
    int HJPL = 10000;
    int HJPX = 13100;
    int HJBS = 6500;
    int HJDL = 14600;
    string JK;
    int JL;
    int HJ;

    std::cout << "Masukkan jenis bensin kendaraan (SOLAR / NONSOLAR): ";
    cin >> JK;
    

    string JS;
    

    if (JK == "SOLAR") {
        std::cout << "Masukkan jumlah liter: "; 
        cin >> JL;
        std::cout << "Masukkan jenis SOLAR (DEXLITE / BIOSOLAR): ";
        cin >> JS;
        if (JS == "DEXLITE") {
            HJ = HJDL * JL;
        }
        else if (JS == "BIOSOLAR"){
            HJ = HJBS * JL;        
        }else {
            cout << "Jenis bensin tidak valid" << endl;
            return 0;
        }

    } else if (JK == "NONSOLAR") {
        std::cout << "Masukkan jumlah liter: "; 
        cin >> JL;
        std::cout << "Masukkan jenis NON SOLAR (PERTALITE / PERTAMAX): ";
        cin >> JS;
        if (JS == "PERTALITE") {
            HJ = HJPL * JL;
        } else if (JS == "PERTAMAX") {
            HJ = HJPX * JL;
        } else {
            std::cout << "Jenis bensin tidak valid" << std::endl;
            return 0;
        }
    } else {
        std::cout << "Jenis bensin tidak valid" << std::endl;
        return 0;
    }

    int PPN;
    int HB;
    PPN = HJ * 10 / 100;
    HB = HJ + PPN;
    std::cout << "Harga bensin setelah pajak: Rp." << HB << std::endl;

    return 0;
}