#include <cmath>
#include <fstream>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

auto asalSayilar = ofstream { "asalSayilar.txt" };

auto asalSayiMi(int sayi) -> bool
{
    if (sayi <= 1) {
        return false;
    }

    for (int i = 2; i < int(sqrt(sayi)) + 1; i++) {
        if (sayi % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int girilenSayi;

    cout << "Asal sayilari listelemek icin ust sinir giriniz: ";
    cin >> girilenSayi;

    for (int i = 1; i < girilenSayi; i += 2) {
        if (asalSayiMi(i)) {
            cout << i << endl;
            asalSayilar << i << endl;
        }
    }
}
