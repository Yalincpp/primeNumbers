#include <cmath>
#include <iostream>
#include <limits>

using namespace std;

unsigned long long girilenSayi;
unsigned long long x;

int main()
{
    cout << "sizeof(long long): " << sizeof(long long) << endl;
    cout << "std::numerical_limits<unsigned long long>::max() : " << std::numeric_limits<unsigned long long>::max() << endl;

    cout << "Asallik kontrolu icin sayi giriniz: ";
    cin >> girilenSayi;

    x = int(sqrt(girilenSayi)) + 1;

    if (girilenSayi % 2 == 0) {
        cout << girilenSayi << " asal degildir, 2'ye bolunur.\n";
        return 0;
    }

    for (int i = 3; i < x; i += 2) {
        if (girilenSayi % i == 0) {
            cout << girilenSayi << " asal degildir, " << i << "'ye bolunur." << endl;
            return 0;
        }
    }

    cout << girilenSayi << " asaldir.\n";
    return 0;
}
