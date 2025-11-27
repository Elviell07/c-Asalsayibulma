#include <iostream>
using namespace std;

int main() {
    int b;
    bool isPrime = true;
  
    cout << "Bir sayi giriniz: ";
    cin >> b;

    if (b <= 1) {
        // Sayi 1 veya daha küçük bir sayiysa isPrime (Asal mı) değişkenini false olarak günceliyoruz
        isPrime = false;
    } else if (b == 2) {
        // Sayi 2 olduğu durumda da asal olduğu için isPrime true olarak güncelledik
        isPrime = true; 
    } else {   
        for (int a = 2; a * a <= b; a++) { 
            if (b % a == 0) {
                isPrime = false; // Sayı asal olmadığı için isPrime false olarak güncelledik
                break; // Kontrolü sonlandır
            }
        }
    }

    // Güncel durumuna göre konsola yazdırdık
    if (isPrime) {
        cout << b << " Bir asal sayidir." << endl;
    } else {
        cout << b << " Bir asal sayi degildir." << endl;
    }

    return 0;
}
