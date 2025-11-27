#include <iostream>
using namespace std;
int main()
/* 
Buraları katıp karıştırmışsın (Şaka Şaka)
Eline sağlık ufak tefek eksikleri vardı 
Fiyakalı olsun diye farklı şekilde başka bir kod daha yazdım 😎
AYRICA README.MD DOSYALARINA DEĞİL PROJE DOSYALARINI BÖYLE YÜKLEMEN GEREKİYOR !!
*/
{
    int a,b;
    cout << "Bir sayi giriniz";
    cin >> b;
    if(b==1)
  {
      cout << "En kucuk asal sayi 2 dir";
  }

for(a=2;a<b;a++)
{
    if(b%a==0)
    {
    cout << "Asal sayi degil";
    break;
    }
}

if(b==a)
{
    cout << "Asal sayi";
}
    
return 0;

}
